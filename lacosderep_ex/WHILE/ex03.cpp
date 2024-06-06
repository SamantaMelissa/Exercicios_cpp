#include <iostream>
using namespace std;

int main() {
    //Escreva um programa que receba números do usuário até que seja digitado um valor negativo e exiba a média dos números digitados.
    int contador = 0;
    double numero, soma = 0;
    cout << "Digite números (para parar, digite um número negativo):" << endl;
    cin >> numero;
    while (numero >= 0) {
        soma += numero;
        contador++;
        cin >> numero;
    }
    if (contador > 0) {
        double media = soma / contador;
        cout << "A média é: " << media << endl;
    } else {
        cout << "Nenhum número foi digitado." << endl;
    }
    return 0;
}
