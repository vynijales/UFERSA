// Escreva um programa que crie uma variável inteira chamada medida. Atribua o 
// valor 10 para esta variável. Calcule e exiba o valor de 2 vezes medida e de medida 
// ao quadrado. O programa deve exibir os três valores como no exemplo abaixo: 
// Medida: 10 
// 2x medida: 20 
// Medida ao quadrado: 100 
// Desafio: tente fazer esse programa usando apenas uma variável

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int medida = 10;

    cout << "Medida: " << medida << endl;
    cout << "2x medida: " << medida * 2 << endl;
    cout << "Medida ao quadrado: " << pow(medida, 2) << endl;
    
    system("pause");
}