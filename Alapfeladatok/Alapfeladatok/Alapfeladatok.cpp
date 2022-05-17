// Alapfeladatok.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

bool isNumber(const string& str)
{
    for (char const& c : str) {
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}

void szovegszam()
{
    string du;
    cout << "Egy beolvasott stringrol allap�tjuk meg, hogy az egesz szam-e vagy sem.\nAdj meg egy szamot: ";
    cin >> du;
    // cout << du;
    isNumber(du) ? cout << "Ez egy egyesz szam,\n" : cout << "Ez nem egy egesz szam";
}

void nagyobb()
{
    /*
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

void paros()
{
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

int main()
{
    szovegszam();
    nagyobb();
    paros();
    return 0;
}
