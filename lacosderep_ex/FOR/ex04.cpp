#include <iostream>
using namespace std;

int main() {
    //Escreva um programa que exiba a tabuada de um número fornecido pelo usuário.
    int num;
    cout << "Digite um número para ver a tabuada: ";
    cin >> num;

    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    return 0;
}
