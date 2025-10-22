// Faça um programa que pergunte para o usuário a quantidade de números que ele 
// quer digitar. Após isso crie um laço que exiba o número que o usuário digitar apenas 
// se for PAR. Utilize a estrutura WHILE.

#include <iostream>
using namespace std;

int main(){
    int quantidade;
    cout << "Qual a quantidade de numeros desejados a digitar?";
    cin >> quantidade;
    //num = 5;
    int num = 0;
    while(num <= quantidade){
       int numero;
       cout << "Digite um numero: ";
       cin >> numero;
       if(numero % 2 == 0){
        cout << "Seu numero eh par: " << numero << endl;
       }
       num++;
    }
    return 0;
}
