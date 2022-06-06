#include <iostream>
#include <string>

using namespace std;

bool isNumber(const string& str)
{
    for (char const& c : str) {
        if (isdigit(c) == 0) return false;
    }
    return true;
}

void szovegszam()
{
    // 01-01 Szöveg-szám
    // Olvassunk be egy számot. Ha nem egész szám, akkor írjuk ki, hogy "Nem egész szám", különben írjuk ki, hogy "Egész szám".
    string du;
    cout << "Egy beolvasott stringrol allapítjuk meg, hogy az egesz szam-e vagy sem.\nAdj meg egy szamot: ";
    cin >> du;
    isNumber(du) ? cout << "Ez egy egyesz szam,\n" : cout << "Ez nem egy egesz szam";
}

void nagyobb()
{
    /*
    01-02 Nagyobb
    Feladat leírás:
    Olvass be két egész számot. Írd ki a nagyobbat. Ha egyformák, akkor írd ki, hogy egyenlõk.
    Biztosra vehetjük, hogy egész számot adunk meg.
    */
    int num1;
    int num2;
    cout << "Ket beadtoo szambol melallapitjuk hogy melyik a nagyobb.\nAdd meg az elsõ szamot: ";
    cin >> num1;
    cout << "Add meg a második számot: ";
    cin >> num2;
    if (num1 == num2)
    {
        cout << "A ket szam egyenlo.";
    }
    else if (num1 > num2) {
        cout << "A nagyobb szam: " << num1;
    }
    else
    {
        cout << "A nagyobb szam: " << num2;
    }
    cout << "\n";
}

void Paros()
{
    // 01-03 Páros-páratlan
    // Olvassunk be egy egész számot. Ha nem egész szám, akkor írjuk ki, hogy "Nem egész szám", különben írjuk ki, hogy páros-e vagy páratlan.
    int num1;
    cout << "Egy beadott szamrol megalapitjuk, hogy paros-e vagy paratlan.\nAdd meg a szamot: ";
    cin >> num1;
    if (num1 % 2 == 0)
    {
        cout << "Az adott szam paros.";
    }
    else
    {
        cout << "Az adott szam paratlan.";
    }
}

void Szoveghossz()
{
    // 01-04 Szöveghossz
    // Olvass be két szöveget és írd ki a rövidebbet. Ha egyforma hosszúak, akkor írd ki, hogy egyformák.
    string du1;
    string du2;
    cout << "Ket beolvasott szovegrol állapítjuk meg, hogy melyik a rovidebb.\nAdj meg egy szoveget: ";
    cin >> du1;
    cout << "Adj meg egy masik szoveget: ";
    cin >> du2;
    if (du1.length() > du2.length())
    {
        cout << "Az elso szoveg hosszabb.";
    }
    else if (du1.length() < du2.length())
    {
        cout << "A masodik szoveg hosszabb.";
    }
    else
    {
        cout << "A ket szoveg hossza egyenlo.";
    }
}

void Nagyobb()
{
    /*
    01-05 Nagyobb 10-nél
    Olvass be egy egész számot. Írd ki ha nagyobb tíznél: "Nagy", különben azt, hogy "Kicsi".
    Biztosra vehetjük, hogy egész számot adunk meg.
    */
    int du;
    cout << "Egy szamrol allapitsuk meg hogy nagyobbe 10-nel.\nAdj meg egy szamot: ";
    cin >> du;
    if (du >= 10)
    {
        cout << "Nagy\n";
    }
    else {
        cout << "Kicsi\n";
    }
}

void Dupla()
{
    /*
    * 01-06 Szám duplája
    Olvassunk be egy egész számot. 
    Ha nem egész számot adtak meg, érjen véget azzal, hogy kírjuk: "HIBA: Nem egész számot adtál meg!". 
    Különben írjuk ki a szám dupláját.
    */
    string du;
    cout << "Kiirjuk egy szam dulpjaat.\nAdj meg egy szoveget: ";
    cin >> du;
    if (isNumber(du))
    {
        cout << stoi(du) * 2 << "\n";
    }
    else
    {
        cout << "Nem szamot adtal meg!\n";
    }
    
}

void Betuker()
{
    /*
    * 01-07 Betûkeresés
    Olvassunk be egy szöveget és írjuk ki, hogy van-e benne kis "a"-betû.
    */
    string du;
    cout << "A bekért szovegrol megallapitjuk, hogy van-e benne kis \"a\" betû,\nAdj meg egy szoveget:";
    cin >> du;
    if (! du.find("a"))
    {
        cout << "A szoveg tartalmaz \"a\" betût.\n";
    }
    else {
        cout << "A szoveg nem tartalalmaz \"a\" betût.";
    }
}

void Negyzet()
{
    /*
    01-08 Egész szám négyzete
    Kérjen be egy számot a felhasználótól (ellenõrizze, hogy egész szám-e), ha egész szám, akkor írja ki a négyzetét, ha nem, akkor azt, hogy "Nem egész szám!"
    */
}

int main()
{
    //szovegszam();
    //nagyobb();
    //Paros();
    //Szoveghossz();
    //Nagyobb();
    //Dupla();
    //Betuker();
    return 0;
}
