// Dados dois pontos P e Q na tela do computador, calcule a distância entre eles 
// utilizando a fórmula: 𝐷𝑖𝑠𝑡â𝑛𝑐𝑖𝑎= √[(𝑄𝑥−𝑃𝑥)^2 +(𝑄𝑦−𝑃𝑦)^2]
// Dica: utilize as funções sqrt e pow da biblioteca cmath.
// // Ponto P: 
// // 5 8 
// // Ponto Q:  
// // 20 4 
 
// // A distância entre P e Q é: 15.5242 

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float px, py, qx, qy, distancia;
    
    cout << "Digite o ponto P" << endl;
    cin >> px >> py;
    cout << "Digite o ponto Q" << endl;
    cin >> qx >> qy;

    distancia = sqrt(pow(qx - px, 2) + pow(qy - py, 2));

    cout << "Distancia entre P e Q: " << distancia << endl;

    system("pause");
}


