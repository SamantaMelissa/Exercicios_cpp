#include <iostream>
using namespace std;

int main() {
    // Escreva um programa que simule uma caixa registradora de uma loja. O programa deve solicitar ao usuário o preço de cada item comprado. Após cada inserção de preço, o programa deve perguntar ao usuário se deseja continuar a compra (digitando 's' para sim ou 'n' para não). Quando o usuário terminar de inserir os preços, o programa deve calcular e exibir o total da compra.
    double preco, total = 0;
    char continuar = 's';

    while (continuar == 's') {
        cout << "Digite o preço do item: R$ ";
        cin >> preco;
        total += preco;

        cout << "Deseja continuar a compra? (s/n): ";
        cin >> continuar;
    }

    cout << "O total da compra é: R$ " << total << endl;

    return 0;
}
