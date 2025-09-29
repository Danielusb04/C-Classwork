// juego de adivinar el numero secreto

#include <iostream>
using namespace std;

int main() {
    int secreto = 7;
    int intento;

    cout << "adivina el numero secreto (entre 1 y 10): " << endl;

    do {
        cout << "Ingrese su intento: ";
        cin >> intento;

        if (intento != secreto) {
            cout << "Incorrecto, intenta de nuevo." << endl;

        }


    } while (intento != secreto);

     cout << "¡Felicidades! adivinaste el numero." << endl;

     return 0;
}