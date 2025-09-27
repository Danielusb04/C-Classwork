#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    cout << "ingrese una palabra: ";
    cin >> palabra; // leemos una palabra

    int inicio = 0, fin = palabra.length() -1;
    bool esPalindromo = true;

    while (inicio < fin) {
        if (palabra[inicio] != palabra[fin]) {
            esPalindromo = false;
            break;
        }

        inicio++;
        fin--;
    }

    if (esPalindromo)
        cout << "La palabra es un palíndromo." << endl;
    
    else 
        cout << "La palabra NO es un palíndromo." << endl;

    return 0;
}


