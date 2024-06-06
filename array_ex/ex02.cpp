#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    
    // Modificando o valor do terceiro elemento
    arr[2] = 10;
    
    // Imprimindo elementos modificados do array
    for(int i = 0; i < 5; i++) {
        cout << "Elemento na posição " << i << " é: " << arr[i] << endl;
    }
    
    return 0;
}
