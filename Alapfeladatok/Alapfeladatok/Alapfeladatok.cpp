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
    cout << "Egy beolvasott stringrol allapítjuk meg, hogy az egesz szam-e vagy sem.\nAdj meg egy szamot: ";
    cin >> du;
    // cout << du;
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
    cout << "\nAdd meg a második számot: ";
    cin >> num2;
}

int main()
{
    szovegszam();
    return 0;
}
