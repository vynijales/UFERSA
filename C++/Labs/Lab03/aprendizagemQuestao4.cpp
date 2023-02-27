// O custo de um carro novo ao consumidor é a soma do custo de fábrica com a 
// percentagem do distribuidor e dos impostos (aplicados ao custo da fábrica). 
// Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, 
// faça um programa para ler o custo de fábrica de um carro e escrever o custo ao 
// consumidor. 
// // Custo de fábrica: 60000 
// // O custo ao consumidor é de R$103800 

#include <iostream>
using namespace std;

int main() {
    float custoFabrica, custoConsumidor;

    cout << "Custo de Fabrica: ";
    cin >> custoFabrica;

    custoConsumidor = custoFabrica + custoFabrica * 0.28 + custoFabrica * 0.45;

    cout << "Custo ao Consumidor: R$" << custoConsumidor << endl;
    system("pause");
}