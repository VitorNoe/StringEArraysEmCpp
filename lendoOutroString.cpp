#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    
    int valor;
    std::cout << "Digite um valor inteiro: ";
    std::cin >> valor;
    std::cout << "Valor digitado: " << valor << std::endl;

    double temperatura;
    std::cout << "Digite a temperatura: ";
    std::cin >> temperatura;
    std::cout << "Temperatura digitada: " << temperatura << std::endl;

    std::string nome;
    std::cout << "Digite seu nome: ";
    std::cin >> nome;
    std::cout << "Olá, " << nome << "!" << std::endl;

    return 0;
}