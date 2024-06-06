#include <iostream>
using namespace std;

//Crie um programa que leia 8 números inteiros e armazene-os em um array. Em seguida, encontre e exiba o maior número
int main() {
    int arr[8];
    // cout << "Digite 8 numeros inteiros:" << endl;

    for (int i = 0; i < 8; ++i) {
        cout<< "Digite o numero " << (arr[i] + 1) << " número";
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 1; i < 8; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "O maior numero e: " << max << endl;
    return 0;
}
