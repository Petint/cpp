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
    // Olvassunk be egy sz�mot. Ha nem eg�sz sz�m, akkor �rjuk ki, hogy "Nem eg�sz sz�m", k�l�nben �rjuk ki, hogy "Eg�sz sz�m".
    string du;
    cout << "Egy beolvasott stringrol allap�tjuk meg, hogy az egesz szam-e vagy sem.\nAdj meg egy szamot: ";
    cin >> du;
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

void Paros()
{
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

int main()
{
    //szovegszam();
    //nagyobb();
    //Paros();
    //Szoveghossz();
    //Nagyobb();
    Dupla();
    return 0;
}
