#include <iostream>
using namespace std;

int main() {
    //Escreva um programa que use um laço for para imprimir os números de N a 1, onde N é fornecido pelo usuário.
    int N;
    cout << "Digite o valor de N: ";
    cin >> N;

    for (int i = N; i >= 1; i--) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
