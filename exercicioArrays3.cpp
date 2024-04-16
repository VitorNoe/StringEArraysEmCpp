#include <iostream>
using namespace std;

int main() {
    const int tamanho = 4;
    int num[tamanho];
    int numSubstituir;

    cout << "Digite 4 números:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Número " << i + 1 << ": ";
        cin >> num[i];
    }

    cout << "Digite o número para substituir: ";
    cin >> numSubstituir;

    for (int i = 0; i < tamanho; ++i) {
        if (num[i] == numSubstituir) {
            num[i] = -1;
        }
    }

    cout << "Array modificado:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}