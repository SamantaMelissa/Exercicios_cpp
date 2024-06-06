#include <iostream>
using namespace std;

int main() {
    //Escreva um programa que solicite números ao usuário até que a soma dos números digitados seja maior que 100.
    int soma = 0, numero;
    cout << "Digite números até que a soma seja maior que 100:" << endl;
    cin >> numero;
    while (soma <= 100) {
        soma += numero;
        cin >> numero;
    }
    cout << "A soma dos números é: " << soma << endl;
    return 0;
}
