// Escreva um programa que peça ao usuário para digitar um número inteiro 
// (positivo ou negativo). Crie e use uma função chamada Absoluto() para encontrar 
// o valor absoluto de um número. A função Absoluto() deve receber um valor inteiro 
// por parâmetro e retornar o seu valor absoluto.
// // Digite um número inteiro: -10 
// // O valor absoluto é 10.
// Dica: uma forma de achar o valor absoluto de um número é elevando-o ao 
// quadrado e depois achando a sua raiz quadrada. A função Absoluto() deve 
// implementar esta técnica usando as funções pow() e sqrt() da biblioteca cmath.

#include <iostream>
#include <cmath>

using namespace std;


double Absoluto(double n) {
    return sqrt(pow(n, 2));
}

int main() {

    int n;

    cout << "Digite um numero inteiro: ";
    cin >> n;

    cout << "Valor absoluto: " << Absoluto(n) << endl;

    system("pause");
}