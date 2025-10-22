//Escreva um programa que solicite números ao usuário até que a soma dos números digitados seja maior que 100.
#include <iostream>
using namespace std;
int main(){
    float numero, soma = 0;

    while(soma>=100){
        cout << "Digite seu numero: ";
        cin >> numero;
        soma += numero;
    }

    cout << soma << endl;
    
    return 0;
}


