#include <iostream>
using namespace std;

int main() {
    int N, i = 1, suma = 0;

    cout << "Ingrese un numero N: ";
    cin >> N;

    while (i <= N) {
        suma += i;   // suma = suma + i
        i++;
    }

    cout << "La suma de los primeros " << N << " numeros es: " << suma << endl;

    return 0;
}
