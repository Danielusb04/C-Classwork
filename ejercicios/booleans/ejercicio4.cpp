// Saber si alguien mayor o menos de edad

#include <iostream>
using namespace std;

int main() {
    int edad;
    bool esMayor;

    cout << "Ingrese su edad: ";
    cin >> edad;

    esMayor = (edad >=18);

    cout << "¿Es mayor de edad?" << (esMayor ? "true" : "false") << endl;

    return 0;
}
