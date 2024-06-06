#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    
    // Acessando e imprimindo elementos do array
    for(int i = 0; i < 5; i++) {
        cout << "Elemento na posição " << i << " é: " << arr[i] << endl;
    }
    
    return 0;
}
