#include <iostream>
using namespace std;

int main() {
    //Escreva um programa que solicite ao usuário notas de alunos e exiba a média das notas. O programa deve parar de solicitar notas quando o usuário digitar -1.
    double nota, soma = 0;
    int contador = 0;

    cout << "Digite as notas dos alunos (-1 para sair):" << endl;
    cin >> nota;

    while (nota != -1) {
        soma += nota;
        contador++;
        cin >> nota;
    }

    if (contador > 0) {
        double media = soma / contador;
        cout << "A média das notas é: " << media << endl;
    } else {
        cout << "Nenhuma nota foi inserida." << endl;
    }

    return 0;
}
