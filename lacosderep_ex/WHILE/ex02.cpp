#include <iostream>
using namespace std;

int main() {
    //Escreva um programa que receba um número do usuário e exiba a tabuada desse número de 1 a 10.
    int numero, i = 1;
    cout << "Digite um número: ";
    cin >> numero;
    while (i <= 10) {
        cout << numero << " x " << i << " = " << numero * i << endl;
        i++;
    }
    return 0;
}
