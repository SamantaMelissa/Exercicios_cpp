#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //Menu de operações matemáticas: Crie um programa que ofereça um menu com várias operações matemáticas (soma, subtração, multiplicação, divisão, e potência) e realize a operação escolhida pelo usuário.
    int opcao;
    double num1, num2;

    cout << "Menu de Operações Matemáticas:\n";
    cout << "1. Soma\n";
    cout << "2. Subtração\n";
    cout << "3. Multiplicação\n";
    cout << "4. Divisão\n";
    cout << "5. Potência\n";
    cout << "Escolha uma opção: ";
    cin >> opcao;

    if (opcao >= 1 && opcao <= 5) {
        cout << "Digite o primeiro número: ";
        cin >> num1;
        cout << "Digite o segundo número: ";
        cin >> num2;
    }

    switch (opcao) {
        case 1:
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "Resultado: " << num1 / num2 << endl;
            else
                cout << "Erro: Divisão por zero!\n";
            break;
        case 5:
            cout << "Resultado: " << pow(num1, num2) << endl;
            break;
        default:
            cout << "Opção inválida!\n";
            break;
    }

    return 0;
}
