#include <iostream>
#include <string>
using namespace std;

int main() {
    // Escreva um programa que solicite ao usuário uma senha e verifique se ela corresponde a uma senha predefinida. O programa deve permitir que o usuário insira a senha até três tentativas. Se a senha estiver correta, o programa deve exibir uma mensagem de boas-vindas; caso contrário, deve informar que a senha está incorreta e encerrar o programa.
    string senha, senhaCorreta = "senha123";
    int tentativas = 0;
    
    cout << "Digite a senha (3 tentativas): ";
    cin >> senha;
    
    while (senha != senhaCorreta && tentativas < 2) {
        cout << "Senha incorreta! Tente novamente: ";
        cin >> senha;
        tentativas++;
    }
    
    if (senha == senhaCorreta) {
        cout << "Senha correta! Bem-vindo!" << endl;
    } else {
        cout << "Número máximo de tentativas excedido. Tente novamente mais tarde." << endl;
    }
    
    return 0;
}
