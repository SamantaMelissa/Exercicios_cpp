#include <iostream>
using namespace std;

int main() {
    //Escreva um programa que solicite um número ao usuário e exiba a soma dos dígitos desse número.
    int numero, soma = 0, digito;
    cout << "Digite um número: ";
    cin >> numero;
    while (numero != 0) {
        digito = numero % 10;
        soma += digito;
        numero /= 10;
    }
    cout << "A soma dos dígitos é: " << soma << endl;
    return 0;
}
