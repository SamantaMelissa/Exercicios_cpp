#include <iostream>
using namespace std;

int main() {
    //Escreva um programa que receba números do usuário até que seja digitado um valor negativo e exiba a média dos números digitados.
    float numero, soma = 0;
    int contador = 0;
    cout << "Informe um numero (Caso deseje encerrar, escreva um numero negativo): ";
    cin >> numero;
    //numero = 3;
    while(numero >= 0){ 
        soma += numero; // soma = 3;
        //serve para verificar quantas vezes o while rodou
        contador++; // contador = 1;
        //Pegando numeros "novos" e inserindo na variavel numero
        cin >> numero;
    }
    if(contador > 0){
        float media = soma / contador;
        cout << "A media dos numero eh: " << media;
    }
    return 0;
}
