#include <iostream>
using namespace std;

int main() {
    // Escreva um programa que solicite números ao usuário até que ele insira 0. Para cada número inserido, o programa deve informar se é positivo, negativo ou zero.
    // Digite um n├║mero (ou 0 para sair): 2
    // O n├║mero ├® positivo.
    // Digite um n├║mero (ou 0 para sair): -1
    // O n├║mero ├® negativo.
    // Digite um n├║mero (ou 0 para sair): 0
    // O n├║mero ├® zero.
    int numero;

    do {
        cout << "Digite um número (ou 0 para sair): ";
        cin >> numero;

        if (numero > 0) {
            cout << "O número é positivo." << endl;
        } else if (numero < 0) {
            cout << "O número é negativo." << endl;
        } else if (numero == 0) {
            cout << "O número é zero." << endl;
        }
    } while (numero != 0);

    return 0;
}
