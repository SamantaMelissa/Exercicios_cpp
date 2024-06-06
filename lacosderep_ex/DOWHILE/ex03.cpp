#include <iostream>
using namespace std;

int main() {
    //Escreva um programa que solicita um número inteiro ao usuário e exibe a tabuada desse número de 1 a 10.

    // Digite um n├║mero inteiro: 20
    // Tabuada de 20:
    // 20 x 1 = 20
    // 20 x 2 = 40
    // 20 x 3 = 60
    // 20 x 4 = 80
    // 20 x 5 = 100
    // 20 x 6 = 120
    // 20 x 7 = 140
    // 20 x 8 = 160
    // 20 x 9 = 180
    // 20 x 10 = 200
    
    int numero;

    // Solicitar um número inteiro ao usuário
    cout << "Digite um número inteiro: ";
    cin >> numero;

    // Exibir a tabuada do número fornecido
    cout << "Tabuada de " << numero << ":" << endl;
    int i = 1;
    do {
        cout << numero << " x " << i << " = " << numero * i << endl;
        i++;
    } while (i <= 10);

    return 0;
}
