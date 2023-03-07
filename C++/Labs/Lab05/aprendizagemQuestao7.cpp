// Crie 2 funções, uma que eleva um número ao quadrado, outra ao cubo. Na função 
// principal, receba um valor do usuário e mostre o número recebido ao quadrado, ao 
// cubo e, por fim, mostre o cubo do quadrado desse número. Ou seja, passe o 
// resultado da função quadrado para a função cubo. Isso pode ser feito passando a 
// chamada da função quadrado como argumento da função cubo.
// // Digite um valor: 2.1 
// // Quadrado = 4.41 
// // Cubo = 9.261 
// // Cubo do quadrado = 85.7661

#include <iostream>
#include <cmath>
using namespace std;

double quadrado(double v) {
    return pow(v, 2);
}

double cubo(double v) {
    return pow(v, 3);
}

int main() {
    double valor;
    system("chcp 65001 > nul");
    
    cout << "Digite um valor: ";
    cin >> valor;
    cout << "Quadrado = " << quadrado(valor) << endl;
    cout << "Cubo = " << cubo(valor) << endl;
    cout << "Cubo do quadrado = " << cubo(quadrado(valor)) << endl;

    system("pause");
}