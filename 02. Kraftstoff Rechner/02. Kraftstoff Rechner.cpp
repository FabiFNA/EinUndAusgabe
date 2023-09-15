#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double kilometer, literVerbraucht, literPreis;

    //kilometer eingabe
    cout << "Eingabe der gefahrenen Kilometer [km]: ";
    cin >> kilometer;
    cout << endl;

    //liter verbraucht eingabe
    cout << "Eingabe der Menge des verbrauchten Benzins [L]: ";
    cin >> literVerbraucht;
    cout << endl;

    //preis pro liter eingabe
    cout << "Eingabe des Preises pro Liter Benzin [EURO]: ";
    cin >> literPreis;
    cout << endl;

    //berechnung pro 100
    double literVerbrauchAuf100 = (literVerbraucht / kilometer) * 100;
    double preisPro100 = literVerbrauchAuf100 * literPreis;

    //ausgabe am ende
    cout << "Sie haben auf 100km " << setprecision(3) << literVerbrauchAuf100 << " Liter verbraucht." << endl;
    cout << "Dies kostet Sie bei einem Preis von " << setprecision(4) << literPreis << " Euro pro Liter, " << setprecision(4) << preisPro100 << " Euro." << endl;

}
