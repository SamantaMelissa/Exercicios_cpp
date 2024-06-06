#include <iostream>
using namespace std;

int main() {
    // Faça um programa que imprima na tela a tabuada de 1 a 10.
    int num;
    int i;
    for (num = 1; num <= 10; num++) {
        cout << "Tabuada do " << num << ":" << endl;
        
        // Laço interno para calcular e imprimir a multiplicação de 1 a 10
        for (i = 1; i <= 10; i++) {
            cout << num << " x " << i << " = " << num * i << endl;
        }
        
        cout << "---------------------------------" <<endl;  // Linha em branco para separar tabuadas
    }

    return 0;

}
