#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    cout << "Ingrese temperatura en Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    cout << "Temperatura en Fahrenheit: " << fahrenheit << endl;

    return 0;
}
