//Escreva um programa que imprima o seguinte padrão de asteriscos, como:
// *
// **
// ***
// ****
// *****

#include <iostream>
using namespace std;

int main() {
    // int linhas = 5;

    for (int i = 1; i <= 5; i++) {
        if(i == 1){ 
            cout << "*";
        }else if(i == 2){
            cout << "**";
        }else if(i == 3){
            cout << "***";
        }else{
            cout << "****";
        }
        // for (int j = 1; j <= i; j++) {
            // cout << "*";
        // }
        cout << endl;
    }

    return 0;
}


