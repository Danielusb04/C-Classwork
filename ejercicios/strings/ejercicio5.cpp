#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    cout << "Ingrea un texto: ";
    getline(cin, texto);
    
    int contadorVocales = 0;

    for (int i = 0; i < texto.length(); i++) {
        char c = tolower(texto[i]);
        if (c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u') {
            contadorVocales++;
        }
    }

    cout << "El número de vocales es: " << contadorVocales << endl;

    return 0;
}