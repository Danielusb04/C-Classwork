// Ejercicio 4: Un arreglo que busca en que posicion esta el numero a buscar
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int numero, pos = -1;

    // Leer los 10 números
    cout << "Ingrese 10 numeros:\n";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Número a buscar
    cout << "Ingrese el numero que desea buscar: ";
    cin >> numero;

    // Búsqueda
    for (int i = 0; i < 10; i++) {
        if (arr[i] == numero) {
            pos = i;
            break; // se detiene al encontrarlo
        }
    }

    if (pos != -1)
        cout << "El numero " << numero << " esta en la posicion " << pos << endl;
    else
        cout << "El numero no se encontro en el arreglo." << endl;

    return 0;
}
