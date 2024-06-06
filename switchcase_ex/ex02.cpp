#include <iostream>
using namespace std;

int main() {

    //Meses do ano: Crie um programa que solicite um número de 1 a 12 e exiba o nome do mês correspondente.
    int mes;
    cout << "Digite um número de 1 a 12: ";
    cin >> mes;

    switch (mes) {
        case 1:
            cout << "Janeiro\n";
            break;
        case 2:
            cout << "Fevereiro\n";
            break;
        case 3:
            cout << "Março\n";
            break;
        case 4:
            cout << "Abril\n";
            break;
        case 5:
            cout << "Maio\n";
            break;
        case 6:
            cout << "Junho\n";
            break;
        case 7:
            cout << "Julho\n";
            break;
        case 8:
            cout << "Agosto\n";
            break;
        case 9:
            cout << "Setembro\n";
            break;
        case 10:
            cout << "Outubro\n";
            break;
        case 11:
            cout << "Novembro\n";
            break;
        case 12:
            cout << "Dezembro\n";
            break;
        default:
            cout << "Número inválido!\n";
            break;
    }

    return 0;
}
