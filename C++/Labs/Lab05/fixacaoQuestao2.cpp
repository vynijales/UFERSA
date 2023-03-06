// Escreva um programa para converter temperaturas de Celsius para Fahrenheit. 
// Você deve criar uma função que receba um valor em Celsius e retorne o 
// equivalente em Fahrenheit. O programa deve pedir ao usuário para digitar uma 
// temperatura em graus Celsius, usar a função para obter o valor equivalente em 
// graus Fahrenheit e exibir uma mensagem com o resultado. A saída do programa 
// deve seguir o modelo abaixo:
// // Digite uma temperatura em graus Celsius: 20.5 
// // 20.5 graus Celsius equivalem a 68.9 graus Fahrenheit.
// Fahrenheit = 1.8 x Celsius + 32.0

#include <iostream>

using namespace std;

int main() {
    double tempC, tempF;

    cout << "Digite uma temperatura em graus Celsius: ";
    cin >> tempC;

    tempF = 1.8 * tempC + 32.0;

    cout << tempC << " graus Celsius equivalem a " << tempF << " graus Fahrenheit."<< endl;

    system("pause");
}