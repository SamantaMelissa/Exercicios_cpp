#include <iostream>
using namespace std;

int main() {
    //Crie um programa que calcule a soma dos dígitos de um número inteiro positivo fornecido pelo usuário.
    int numero, soma = 0;

    // Solicitar ao usuário um número inteiro positivo
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    // Verificar se o número fornecido é positivo
    if (numero <= 0) {
        cout << "Número inválido. Por favor, digite um número inteiro positivo." << endl;
        return 1; // Encerrar o programa com código de erro
    }

    // Calcular a soma dos dígitos do número
    int temp = numero; // Variável temporária para armazenar o número original
    while (temp != 0) {
        soma += temp % 10; // Adicionar o último dígito à soma
        temp /= 10; // Remover o último dígito do número
    }

    // Exibir a soma dos dígitos
    cout << "A soma dos dígitos de " << numero << " é: " << soma << endl;

    return 0;
}
