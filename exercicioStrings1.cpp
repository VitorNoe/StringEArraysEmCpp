#include <iostream>
#include <string>

int main() {

    std::string palavra;

    std::cout << "Digite uma palavra: ";
    std::cin >> palavra;

    std::cout << "O tamanho da palavra e: " << palavra.length() << std::endl;

    return 0;
}
