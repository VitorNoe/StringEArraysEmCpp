#include <iostream>
#include <string>

int main() {
  
    std::string frase;

    std::cout << "Digite uma frase: ";
    std::cin >> std::ws;
    std::getline(std::cin, frase);

    for (char &c : frase) {
        if (c == 'a') {
            c = 'e';
        }
    }

    std::cout << "A frase modificada e: " << frase << std::endl;

    return 0;
}