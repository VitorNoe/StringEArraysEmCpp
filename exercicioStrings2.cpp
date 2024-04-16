#include <iostream>
#include <string>

int main() {
 
    std::string primeiraString, segundaString;

    std::cout << "Digite a primeira string: ";
    std::getline(std::cin, primeiraString);

    std::cout << "Digite a segunda string: ";
    std::getline(std::cin, segundaString); 

    std::string terceiraString = primeiraString + segundaString;

    std::cout << "A string concatenado e: " << terceiraString << std::endl;

    return 0;
}
