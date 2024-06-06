#include <iostream>
using namespace std;

int main() {
    // Escreva um programa que calcule a soma dos primeiros N números ímpares, onde N é fornecido pelo usuário.
    int N;
    cout << "Digite o valor de N: ";
    cin >> N;

    int soma = 0;
    for (int i = 1, contador = 0; contador < N; i += 2, contador++) {
        soma += i;
    }

    cout << "A soma dos primeiros " << N << " números ímpares é: " << soma << endl;
    return 0;
}
