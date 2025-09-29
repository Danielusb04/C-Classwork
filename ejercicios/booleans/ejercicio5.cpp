
// saber si un año es  bisiesto
#include <iostream>
using namespace std;

int main() {
    int anio;
    bool esBisiesto;

    cout << "Ingrese un año: ";
    cin >> anio;

    esBisiesto = ( (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0) );

    cout << "¿El año es bisiesto? " << (esBisiesto ? "true" : "false") << endl;

    return 0;
}
