#include <iostream>
#include <cstring>

int main(){
    int idade;
    double altura;
    char letra;
    char nome; // ainda não sei como fazer isso

    std::cout << "Insira sua idade: ";
    std::cin >> idade;
    std::cout << "Insira sua altura: ";
    std::cin >> altura;
    std::cout << "Digite a primeira letra do seu nome: ";
    std::cin >> letra;
    std::cout << "Digie o seu nome completo: ";
    std::cin >> nome;

    std::cout << idade << "\n" << altura  << "\n" << letra  << "\n" << nome;
}