// ejercio 5 ordena los numeros en un arreglo

#include <iostream>
using namespace std;

int main () {
    int arr[7];

    cout << "Ingrese 7 numeros: \n";
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 7 - 1; i++) {
        for (int j = 0; j < 7 - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout <<"Numeros ordenados de menos a mayor: \n";
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}