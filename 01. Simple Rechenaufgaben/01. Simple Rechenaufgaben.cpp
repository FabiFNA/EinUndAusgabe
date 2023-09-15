#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int Zahl1 = 0;
    int Zahl2 = 0;
    int Zahl3 = 0;

    cout << "Bitte geben sie Zahl1 ein: " << endl;
    cin >> Zahl1;
    cout << "Bitte geben sie Zahl2 ein: " << endl;
    cin >> Zahl2;
    //Zahl3 = Zahl1 + Zahl2;
    cout << "Die Summe lautet: " << Zahl1 + Zahl2 << endl;
    cout << "Bitte gben sie Zahl3 ein: " << endl;
    cin >> Zahl3;

    int Zahl4 = Zahl1 + Zahl2;

    cout << "Das Produkt lautet: " << Zahl4 * Zahl3 << endl;
}
