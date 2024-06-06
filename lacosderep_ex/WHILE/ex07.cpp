#include <iostream>
using namespace std;

int main() {
    //Escreva um programa que solicita números ao usuário até que ele insira 0. Para cada número inserido, o programa deve verificar se é par ou ímpar e exibir essa informação.
    int numero;
    
    cout << "Digite um número (digite 0 para sair): ";
    cin >> numero;
    
    while (numero != 0) {
        if (numero % 2 == 0) {
            cout << numero << " é par." << endl;
        } else {
            cout << numero << " é ímpar." << endl;
        }
        
        cout << "Digite um número (digite 0 para sair): ";
        cin >> numero;
    }
    
    return 0;
}
