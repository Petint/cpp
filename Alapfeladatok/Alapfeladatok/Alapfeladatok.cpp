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
    cout << "Egy beolvasott stringr�l �llap�tjuk meg, hogy az eg�sz sz�m-e vagy sem.\nAdj meg egy sz�mot: ";
    cin >> du;
    // cout << du;
    isNumber(du) ? cout << "Ez egy egy�sz sz�m,\n" : cout << "Ez nem egy eg�sz sz�m";
}

int main()
{
    szovegszam();
}
