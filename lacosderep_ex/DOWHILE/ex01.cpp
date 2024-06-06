#include <iostream>
using namespace std;

int main() {
    //Escreva um programa que exiba uma contagem regressiva de 10 a 1, com uma mensagem personalizada para cada número na contagem regressiva.
    // Preparar...
    // 9...
    // 8...
    // 7...
    // 6...
    // Pronto?
    // 4...
    // 3...
    // 2...
    // 1...
    // Fogo!
    int contador = 10;

    do {
        if (contador == 10) {
            cout << "Preparar..." << endl;
        } else if (contador == 5) {
            cout << "Pronto?" << endl;
        } else {
            cout << contador << "..." << endl;
        }
        contador--;
    } while (contador > 0);

    cout << "Fogo!" << endl;

    return 0;
}
