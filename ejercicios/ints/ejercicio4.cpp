#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, resta;
    cout << "ingrese el primer número: ";
    cin >> num1;
    cout << "ingrese el segundo número: ";
    cin >> num2;
    cout << "ingrese el tercer número: ";
    cin >> num3;

    resta = num1 - num2 - num3; 
    cout << "La resta es: " << resta << endl;

    return 0;
}