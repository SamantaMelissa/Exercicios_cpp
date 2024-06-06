#include <iostream>
using namespace std;

/*
    Enunciado: 
    Faça um programa que pergunte para o usuário a quantidade de números que ele
    quer digitar. Após isso crie um laço que exiba o número que o usuário digitar apenas
    se for ÍMPAR. Utilize a estrutura WHILE.
*/

int main()
{

    int numeros = 0;

    cout << "Quantos números você quer digitar? ";
    cin >> numeros;
    int cont = 1;

    while (cont <= numeros)
    {
        int n;
        cout << "\n digite um número: ";
        cin >> n;

        if (n % 2 == 0)
        {
            cout << "\nO número " << n << " é par!" << endl;
        }
        
        cont++;
    }
    

    return 0;
}