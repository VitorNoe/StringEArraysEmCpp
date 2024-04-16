#include <iostream>

using namespace std;

int main() {
    const int tamanho1 = 5;
    const int tamanho2 = 5;
    const int tamanho3 = tamanho1 + tamanho2 + 1;

    int arr1[tamanho1] = {1, 2, 3, 4, 5};
    int arr2[tamanho2];
    int arr3[tamanho3] = {0};

    cout << "Array1:\n";
    for (int i = 0; i < tamanho1; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Digite mais 5 elementos para o Array2:\n";
    for (int i = 0; i < tamanho2; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arr2[i];
    }

    arr1[2] = 999;

    cout << "\nTodos os elementos dos três arrays:\n";
    cout << "Array1:\n";
    for (int i = 0; i < tamanho1; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Array2:\n";
    for (int i = 0; i < tamanho2; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    cout << "Array3:\n";
    for (int i = 0; i < tamanho3; ++i) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}
