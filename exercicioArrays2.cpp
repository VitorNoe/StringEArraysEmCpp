#include <iostream>

int main() {
    const int tamanhoArray = 3;
    int numeros[tamanhoArray];

    std::cout << "Digite 3 numeros inteiros:\n";
    for (int i = 0; i < tamanhoArray; ++i) {
        std::cout << "Numero " << (i + 1) << ": ";
        std::cin >> numeros[i];
    }

    int indice;
    std::cout << "Digite um indice entre 0 e " << (tamanhoArray - 1) << ": ";
    std::cin >> indice;

    if (indice >= 0 && indice < tamanhoArray) {
        std::cout << "O numero no indice " << indice << " e: " << numeros[indice] << std::endl;
    }

    return 0;
}
