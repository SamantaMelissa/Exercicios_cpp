#include <iostream>
using namespace std;

int main() {
    //Escreva um programa que solicite um número de três dígitos ao usuário e exiba a soma dos dígitos desse número.
    int numero, soma = 0;
    cout << "Digite um número de três dígitos: ";
    cin >> numero;

    for (int i = numero; i > 0; i /= 10) {
        soma += i % 10;
    }

    cout << "A soma dos dígitos é: " << soma << endl;
    return 0;
}
