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
    cout << "Egy beolvasott stringrõl állapítjuk meg, hogy az egész szám-e vagy sem.\nAdj meg egy számot: ";
    cin >> du;
    // cout << du;
    isNumber(du) ? cout << "Ez egy egyész szám,\n" : cout << "Ez nem egy egész szám";
}

int main()
{
    szovegszam();
}
