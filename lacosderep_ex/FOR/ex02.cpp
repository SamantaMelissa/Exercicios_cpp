#include <iostream>
using namespace std;

int main() {
    //Escreva um programa que use um laço for para somar todos os números de 1 a 100 e imprimir o resultado.
    int soma = 0;
    for (int i = 1; i <= 100; i++) {
        soma += i;
    }
    cout << "A soma de 1 a 100 é: " << soma << endl;
    return 0;
}
