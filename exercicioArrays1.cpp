#include <iostream>

int main() {
    const int tamanhoArray = 5;
    int numeros[tamanhoArray];
    std::cout << "Digite 5 numeros inteiros:\n";
    for (int i = 0; i < tamanhoArray; ++i) {
        std::cout << "Numero " << (i + 1) << ": ";
        std::cin >> numeros[i];
    }

    std::cout << "Os numeros na ordem inversa sao:\n";
    for (int i = tamanhoArray - 1; i >= 0; --i) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}