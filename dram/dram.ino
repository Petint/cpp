#define DO 8
#define QI 9
#define RAS 10
#define CAS 11
#define WR 10
int ADDRESS[8] = {0,1,2,3,4,5,6,7};
void setup()
{
  // IO inits
  Serial.begin(9600);
  for (int i=0;i<8;i++){
    pinMode(ADDRESS[i], OUTPUT);
  }
  pinMode(DO, OUTPUT);
  pinMode(QI, INPUT);
  pinMode(RAS, OUTPUT);
  digitalWrite(RAS, HIGH);
  pinMode(CAS, OUTPUT);
  digitalWrite(CAS, HIGH);
  pinMode(WR, OUTPUT);
  digitalWrite(WR, HIGH);
  // write
  for(int i=0; i<256;i++){
    for(int j=0; j<256;j+=8){
      writeByte(i, j, 255);
    }
  }
  // read back
  for(int i=0; i<256;i++)
  {
    Serial.print(i);
    Serial.print(" : ");
    for(int j=0; j<256;j+=8)
    {
      byte dataByte = readByte(i, j);
      Serial.print(dataByte);
      Serial.print(" ");
      // Serial.print(readAddress(i, j));
    }
    Serial.println("");
  }
    // write
  for(int i=0; i<256;i++){
    for(int j=0; j<256;j+=8){
      writeByte(i, j, 0);
    }
  }
  // read back
  for(int i=0; i<256;i++)
  {
    Serial.print(i);
    Serial.print(" : ");
    for(int j=0; j<256;j+=8)
    {
      byte dataByte = readByte(i, j);
      Serial.print(dataByte);
      Serial.print(" ");
      // Serial.print(readAddress(i, j));
    }
    Serial.println("");
  }
}

void addressOut(int address)
{
  for (int i=0;i<8;i++){
    digitalWrite(ADDRESS[i],bitRead(address, i));
  }
}

bool readAddress(int rowAddress, int colAddress)
{
  // read address
  addressOut(rowAddress);
  digitalWrite(RAS, LOW);
  addressOut(colAddress);
  digitalWrite(CAS, LOW);
  addressOut(0);
  bool rd = digitalRead(QI);
  digitalWrite(CAS, HIGH);
  digitalWrite(RAS, HIGH);
  return (bool)rd;
}

byte readByte(int rowAddress, int colAddress){
  byte data = 0x00;
  for(int bit=0;bit<8;bit++){ 
    if(readAddress(rowAddress, colAddress+bit)){
      data = data << 1 | 1;
    } else {
      data = data << 1;
    }
  }
  return data;
}

void WriteAddress(int rowAddress, int colAddress, bool data)
{
  // read address
  digitalWrite(DO, data);
  addressOut(rowAddress);
  digitalWrite(RAS, LOW);
  addressOut(colAddress);
  digitalWrite(WR, LOW);
  digitalWrite(CAS, LOW);
  digitalWrite(WR, HIGH);
  digitalWrite(CAS, HIGH);
  digitalWrite(RAS, HIGH);
  addressOut(0);
}

void writeByte(int colAddress, int rowAddress, byte data){
  int i = 0;
  for(byte mask = 128; mask > 0; mask >>= 1){
    if (data & mask){
      WriteAddress(colAddress, rowAddress+i, 1);
    } else {
      WriteAddress(colAddress, rowAddress+i, 0);
    }
    i++;
  }
}

void loop()
{
  
}
