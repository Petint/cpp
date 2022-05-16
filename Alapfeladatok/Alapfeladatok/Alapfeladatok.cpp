// Alapfeladatok.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void szovegszam()
{
    string du;
    cout << "Egy beolvasott stringrõl állapítjuk meg, hogy az egész szám-e vagy sem.\nAdj meg egy számot: ";
    cin >> du;
    cout << du;
}

int main()
{
    szovegszam();
}
