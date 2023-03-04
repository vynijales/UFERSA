// O volume de um cilindro é dado pela fórmula V = πr2h, onde r é o raio da base, h é a 
// altura do cilindro e π é 3.14159. Escreva uma função chamada VolumeCilindro() 
// que recebe a altura e o raio da base e retorna o volume do cilindro. Escreva um 
// programa principal que leia a altura e o raio de um cilindro, use a função 
// VolumeCilindro() para achar o seu volume e então mostre o resultado na tela.
// // Calcula o Volume de um Cilindro 
// // ------------------------------- 
// // Entre com o raio da base: 10 
// // Entre com a altura: 5 
// // O volume do cilindro é 1570.795

#include <iostream>
#include <cmath>
#define PI 3.14159

using namespace std;

double VolumeCilindro(double r, double h) {
    return PI * h * pow(r, 2);
}

int main() {

    double r, h;

    cout << "Calcula o Volume de um Cilindro " << endl;
    cout << "-------------------------------" << endl;
    cout << "Entre com o raio da base: ";
    cin >> r;
    cout << "Entre com a altura: ";
    cin >> h;

    cout << "Volume do cilindro: " << VolumeCilindro(r, h) << endl;

    // system("pause");
}