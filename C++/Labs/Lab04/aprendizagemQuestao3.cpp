// Escreva uma função chamada media() que recebe dois valores inteiros e retorna a 
// média aritmética destes valores. Teste a função com um programa simples.
// // Digite um valor inteiro: 10 
// // Digite outro valor inteiro: 11 
// // A média dos números é 10.5 

#include <iostream>

using namespace std;

double media(double a, double b) {
    return (a + b) / 2;
}

int main() {
    double a, b;
    cout << "Digite um valor inteiro: ";
    cin >> a;
    cout << "Digite outro valor inteiro: ";
    cin >> b;

    cout << media(a, b) << endl;

    system("pause");
}