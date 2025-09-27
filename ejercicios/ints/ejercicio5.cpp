#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Ingrese tres números: ";
    cin >> num1 >> num2 >> num3;

    int mayor = num1;

    if (num2 > mayor) mayor = num2;
    if (num3 > mayor) mayor = num3;

    cout << "El numero mayor es: " << mayor << endl;

    return 0;
}