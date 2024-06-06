#include <iostream>
using namespace std;

int main() {
    // Escreva um programa que exiba um menu com as seguintes opções:
    // Soma
    // Subtração
    // Multiplicação
    // Divisão
    // Sair
    // O programa deve solicitar ao usuário que escolha uma das opções digitando o número correspondente. Em seguida, o programa deve solicitar dois números para realizar a operação escolhida. Após executar a operação, o programa deve exibir o resultado. O programa deve continuar exibindo o menu e realizando operações até que o usuário escolha a opção "Sair".
    int opcao;
    double num1, num2;

    do {
        // Exibir o menu
        cout << "\nMenu de Operações Matemáticas" << endl;
        cout << "1. Soma" << endl;
        cout << "2. Subtração" << endl;
        cout << "3. Multiplicação" << endl;
        cout << "4. Divisão" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        // Executar a operação correspondente à opção escolhida
        switch (opcao) {
            case 1:
                cout << "Digite dois números para realizar a soma: ";
                cin >> num1 >> num2;
                cout << "Resultado: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Digite dois números para realizar a subtração: ";
                cin >> num1 >> num2;
                cout << "Resultado: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Digite dois números para realizar a multiplicação: ";
                cin >> num1 >> num2;
                cout << "Resultado: " << num1 * num2 << endl;
                break;
            case 4:
                cout << "Digite dois números para realizar a divisão: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    cout << "Resultado: " << num1 / num2 << endl;
                } else {
                    cout << "Erro: divisão por zero!" << endl;
                }
                break;
            case 5:
                cout << "Encerrando o programa..." << endl;
                break;
            default:
                cout << "Opção inválida! Tente novamente." << endl;
        }
    } while (opcao != 5);

    return 0;
}
