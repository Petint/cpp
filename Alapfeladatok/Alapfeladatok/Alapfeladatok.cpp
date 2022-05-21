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
    // Olvassunk be egy számot. Ha nem egész szám, akkor írjuk ki, hogy "Nem egész szám", különben írjuk ki, hogy "Egész szám".
    string du;
    cout << "Egy beolvasott stringrol allapítjuk meg, hogy az egesz szam-e vagy sem.\nAdj meg egy szamot: ";
    cin >> du;
    isNumber(du) ? cout << "Ez egy egyesz szam,\n" : cout << "Ez nem egy egesz szam";
}

void nagyobb()
{
    /*
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
    // Olvass be két szöveget és írd ki a rövidebbet. Ha egyforma hosszúak, akkor írd ki, hogy egyformák.
    string du1;
    string du2;
    cout << "Két beolvasott szövegrõl állapítjuk meg, hogy melyik a rövidebb.\nAdj meg egy szöveget: ";
    cin >> du1;
    cout << "Adj meg egy másik szöveget: ";
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
        cout << "A ket szöveg hossza egyenlo.";
    }
}

int main()
{
    szovegszam();
    nagyobb();
    Paros();
    Szoveghossz();
    return 0;
}
