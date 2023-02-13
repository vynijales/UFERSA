#include <iostream>

int main(){
    int a, b, c;
    float media;

    std::cout << "Digite os 03 números separados por espaço: ";
    std::cin >> a >> b >> c;

    media = (a + b + c) / 3;

    std::cout << "Média: " << (float) media;
}