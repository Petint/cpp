// Alapfeladatok.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void szovegszam()
{
    string du;
    cout << "Egy beolvasott stringr�l �llap�tjuk meg, hogy az eg�sz sz�m-e vagy sem.\nAdj meg egy sz�mot: ";
    cin >> du;
    cout << du;
}

int main()
{
    szovegszam();
}
