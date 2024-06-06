#include <iostream>
using namespace std;

int main() {
    //Menu de operações lógicas: Crie um programa que ofereça um menu para realizar operações lógicas (E, OU, NÃO) em dois valores booleanos.
    int opcao;
    bool val1, val2, resultado;

    cout << "Menu de Operações Lógicas:\n";
    cout << "1. Operação E (AND)\n";
    cout << "2. Operação OU (OR)\n";
    cout << "3. Operação NÃO (NOT) no primeiro valor\n";
    cout << "Escolha uma opção: ";
    cin >> opcao;

    cout << "Digite o primeiro valor (0 ou 1): ";
    cin >> val1;

    if (opcao == 1 || opcao == 2) {
        cout << "Digite o segundo valor (0 ou 1): ";
        cin >> val2;
    }

    switch (opcao) {
        case 1:
            resultado = val1 && val2;
            cout << "Resultado (E): " << resultado << endl;
            break;
        case 2:
            resultado = val1 || val2;
            cout << "Resultado (OU): " << resultado << endl;
            break;
        case 3:
            resultado = !val1;
            cout << "Resultado (NÃO): " << resultado << endl;
            break;
        default:
            cout << "Opção inválida!\n";
            break;
    }

    return 0;
}
