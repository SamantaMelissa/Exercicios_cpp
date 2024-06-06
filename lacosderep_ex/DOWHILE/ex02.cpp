#include <iostream>
#include <string>
using namespace std;

int main() {
    //Escreva um programa que solicita uma senha ao usuário e continua pedindo até que a senha correta seja digitada.

    // Digite a senha: 11
    // Senha incorreta! Tente novamente.
    // Digite a senha: 22
    // Senha incorreta! Tente novamente.
    // Digite a senha: senha123
    // Senha correta! Acesso concedido.
    
    string senha;
    string senhaCorreta = "senha123";

    do {
        cout << "Digite a senha: ";
        cin >> senha;
        if (senha != senhaCorreta) {
            cout << "Senha incorreta! Tente novamente." << endl;
        }
    } while (senha != senhaCorreta);

    cout << "Senha correta! Acesso concedido." << endl;

    return 0;
}
