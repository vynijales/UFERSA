// Agora construa um programa que utilize as funções das questões 4 e 5 para ler as 
// coordenadas de um vetor e mostrar suas coordenadas polares, isto é, seu 
// comprimento e ângulo.
// // Digite as coordenadas do vetor: 
// // x: 10 
// // y: 5 
// // Coordenadas polares do vetor:  
// // (11.1803, 26.5651)

#include <iostream>
#include <cmath>
#define PI 3.1415
using namespace std;

double moduloVetor(double x, double y) {
    return sqrt(pow(x, 2) + pow(y, 2));
}

double angulo(double x, double y) {
    return atan2(y, x) * 180 / PI;
}

int main() {
    double x, y;
    system("chcp 65001 > nul");
    
    cout << "Digite as coordenadas do vetor:" << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    cout << "(" << moduloVetor(x, y) << ", " << angulo(x, y) << ")" << endl;

    system("pause");
}
