// Escreva um programa que peça quantos quilômetros você dirigiu e quantos litros
// de combustível foram gastos e então mostre o consumo do seu carro em km/litro.
// É possível obter um resultado sempre correto usando apenas valores e variáveis
// do tipo inteiro? Faça o teste com o seu programa.
// // Distância percorrida (km): 300
// // Litros de combustível: 30
// // O consumo do seu carro foi de 10 km/litro.
#include <iostream>
using namespace std;

int main() {
    double distance, combustivel;
    system("chcp 65001 > nul");
    
    cout << "Distância percorrida (km): ";
    cin >> distance;
    cout << "Litros de combustível: ";
    cin >> combustivel;
    cout << "O consumo do seu carro foi de " << distance / combustivel << "km/litro." << endl;
    
    system("pause");
}
