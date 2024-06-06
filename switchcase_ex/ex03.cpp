#include <iostream>
using namespace std;

int main() {
    //Converter temperatura: Crie um programa que converta uma temperatura de Celsius para Fahrenheit ou Kelvin, baseado na escolha do usuário.
    double temp;
    int opcao;

    cout << "Digite a temperatura em Celsius: ";
    cin >> temp;

    cout << "Escolha a conversão:\n";
    cout << "1. Celsius para Fahrenheit\n";
    cout << "2. Celsius para Kelvin\n";
    cin >> opcao;

    switch (opcao) {
        case 1:
            cout << temp << " Celsius = " << (temp * 9/5) + 32 << " Fahrenheit\n";
            break;
        case 2:
            cout << temp << " Celsius = " << temp + 273.15 << " Kelvin\n";
            break;
        default:
            cout << "Opção inválida!\n";
            break;
    }

    return 0;
}
