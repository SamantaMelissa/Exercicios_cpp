#include <iostream>
using namespace std;

int main() {
    //Escreva um programa que receba um número do usuário e exiba a tabuada desse número de 1 a 10.
    int num, cont = 1;
  
    cout << "Informe um numero: ";
    cin >> num;

    while(cont <= 10){
        int resultado = num * cont;
        cout << num << " X " << cont << " = " << resultado << endl;
        cont++;
    }

    //num x cout = resultado
    //num x 2 = resultado
    //num x 3 = resultado
    //num x 4 = resultado
    //num x 5 = resultado
    //num x 6 = resultado
    //num x 7 = resultado
    //num x 8 = resultado
    //num x 9 = resultado
    //num x 10 = resultado

    
    

    return 0;
}


