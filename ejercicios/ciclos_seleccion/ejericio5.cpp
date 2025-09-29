#include <iostream>
using namespace std;

int main() {
    int edad = 20;
    bool tieneDocumento = true;

    if (edad >= 18 && tieneDocumento) {
        cout << "Puede entrar a la discoteca." << endl;
    } else {
        cout << "No puede entrar." << endl;
    }

    return 0;
}
