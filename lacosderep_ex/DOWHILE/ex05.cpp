#include <iostream>
using namespace std;

int main() {
    //Escreva um programa que solicita notas ao usuário até que ele insira um valor negativo. O programa deve calcular e exibir a média das notas inseridas.
    double nota, soma = 0;
    int contador = 0;

    do {
        cout << "Digite a nota (ou um valor negativo para sair): ";
        cin >> nota;

        if (nota >= 0) {
            soma += nota;
            contador++;
        }
    } while (nota >= 0);

    if (contador > 0) {
        double media = soma / contador;
        cout << "A média das notas é: " << media << endl;
    } else {
        cout << "Nenhuma nota válida foi inserida." << endl;
    }

    return 0;
}
