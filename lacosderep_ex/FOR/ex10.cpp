#include <iostream>
using namespace std;

int main() {
    //Peça ao usuário para inserir dois números inteiros (o primeiro número deve ser menor que o segundo) e calcule a soma de todos os números pares entre esses dois números, incluindo eles próprios se forem pares.
    //Exemplo de entrada e saída:
        // Digite o primeiro número inteiro: 3
        // Digite o segundo número inteiro: 8
        // A soma dos números pares entre 3 e 8 é: 18
    int primeiroNumero, segundoNumero, soma = 0;

    // Solicitar ao usuário o primeiro número
    cout << "Digite o primeiro número inteiro: ";
    cin >> primeiroNumero;
    // Solicitar ao usuário o segundo número
    cout << "Digite o segundo número inteiro: ";
    cin >> segundoNumero;

    // Verificar se o primeiro número é menor que o segundo número
    if (primeiroNumero < segundoNumero) {
        // Calcular a soma dos números pares entre os dois números
        for (int i = primeiroNumero; i <= segundoNumero; i++) {
            if (i % 2 == 0) {
                soma += i;
            }
        }
        // Exibir a soma dos números pares
        cout << "A soma dos números pares entre " << primeiroNumero << " e " << segundoNumero << " é: " << soma << endl;  
    }else{
        cout << "O primeiro número deve ser menor que o segundo ";
    }

    return 0;
}
