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
    // 01-01 Sz�veg-sz�m
    // Olvassunk be egy sz�mot. Ha nem eg�sz sz�m, akkor �rjuk ki, hogy "Nem eg�sz sz�m", k�l�nben �rjuk ki, hogy "Eg�sz sz�m".
    string du;
    cout << "Egy beolvasott stringrol allap�tjuk meg, hogy az egesz szam-e vagy sem.\nAdj meg egy szamot: ";
    cin >> du;
    isNumber(du) ? cout << "Ez egy egyesz szam,\n" : cout << "Ez nem egy egesz szam";
}

void nagyobb()
{
    /*
    01-02 Nagyobb
    Feladat le�r�s:
    Olvass be k�t eg�sz sz�mot. �rd ki a nagyobbat. Ha egyform�k, akkor �rd ki, hogy egyenl�k.
    Biztosra vehetj�k, hogy eg�sz sz�mot adunk meg.
    */
    int num1;
    int num2;
    cout << "Ket beadtoo szambol melallapitjuk hogy melyik a nagyobb.\nAdd meg az els� szamot: ";
    cin >> num1;
    cout << "Add meg a m�sodik sz�mot: ";
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
    // 01-03 P�ros-p�ratlan
    // Olvassunk be egy eg�sz sz�mot. Ha nem eg�sz sz�m, akkor �rjuk ki, hogy "Nem eg�sz sz�m", k�l�nben �rjuk ki, hogy p�ros-e vagy p�ratlan.
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
    // 01-04 Sz�veghossz
    // Olvass be k�t sz�veget �s �rd ki a r�videbbet. Ha egyforma hossz�ak, akkor �rd ki, hogy egyform�k.
    string du1;
    string du2;
    cout << "Ket beolvasott szovegrol �llap�tjuk meg, hogy melyik a rovidebb.\nAdj meg egy szoveget: ";
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
    01-05 Nagyobb 10-n�l
    Olvass be egy eg�sz sz�mot. �rd ki ha nagyobb t�zn�l: "Nagy", k�l�nben azt, hogy "Kicsi".
    Biztosra vehetj�k, hogy eg�sz sz�mot adunk meg.
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
    * 01-06 Sz�m dupl�ja
    Olvassunk be egy eg�sz sz�mot. 
    Ha nem eg�sz sz�mot adtak meg, �rjen v�get azzal, hogy k�rjuk: "HIBA: Nem eg�sz sz�mot adt�l meg!". 
    K�l�nben �rjuk ki a sz�m dupl�j�t.
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
    * 01-07 Bet�keres�s
    Olvassunk be egy sz�veget �s �rjuk ki, hogy van-e benne kis "a"-bet�.
    */
    string du;
    cout << "A bek�rt szovegrol megallapitjuk, hogy van-e benne kis \"a\" bet�,\nAdj meg egy szoveget:";
    cin >> du;
    if (! du.find("a"))
    {
        cout << "A szoveg tartalmaz \"a\" bet�t.\n";
    }
    else {
        cout << "A szoveg nem tartalalmaz \"a\" bet�t.";
    }
}

void Negyzet()
{
    /*
    01-08 Eg�sz sz�m n�gyzete
    K�rjen be egy sz�mot a felhaszn�l�t�l (ellen�rizze, hogy eg�sz sz�m-e), ha eg�sz sz�m, akkor �rja ki a n�gyzet�t, ha nem, akkor azt, hogy "Nem eg�sz sz�m!"
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
