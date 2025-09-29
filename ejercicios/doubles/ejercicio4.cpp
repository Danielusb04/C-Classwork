#include <iostream>
using namespace std;

int main() {
    double a, b, c, promedio;
    cout << "Ingrese tres numeros decimales: ";
    cin >> a >> b >> c;

    promedio = (a + b + c) / 3.0;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
