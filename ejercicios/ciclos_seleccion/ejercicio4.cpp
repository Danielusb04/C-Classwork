// descuento de un producto segun la edad
#include <iostream>
using namespace std;

int main() {
    double precio, total;
    int edad;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad < 18) {
        total = precio * 0.90; // 10% descuento
        cout << "Se aplica 10% de descuento. Total a pagar: $" << total << endl;
    } else if (edad > 60) {
        total = precio * 0.80; // 20% descuento
        cout << "Se aplica 20% de descuento. Total a pagar: $" << total << endl;
    } else {
        total = precio;
        cout << "No se aplica descuento. Total a pagar: $" << total << endl;
    }

    return 0;
}
