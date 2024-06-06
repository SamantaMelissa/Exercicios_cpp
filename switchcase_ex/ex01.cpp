#include <iostream>
using namespace std;

int main() {

// Exercício 1: Dias da Semana
// Receba um número de 1 a 7 e imprima o dia da semana correspondente.

    int dia;

    cout << "Digite um numero de 1 a 7: ";
    cin >> dia;

    switch(dia) {
        case 1:
            cout << "Domingo" << endl;
            break;
        case 2:
            cout << "Segunda-feira" << endl;
            break;
        case 3:
            cout << "Terca-feira" << endl;
            break;
        case 4:
            cout << "Quarta-feira" << endl;
            break;
        case 5:
            cout << "Quinta-feira" << endl;
            break;
        case 6:
            cout << "Sexta-feira" << endl;
            break;
        case 7:
            cout << "Sabado" << endl;
            break;
        default:
            cout << "Numero invalido!" << endl;
            break;
    }

    return 0;
}
