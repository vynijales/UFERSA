// Utilize a diretiva #define para criar constantes simbólicas para o preço de um pão 
// (R$0,30) e para o preço de um pastel (R$0,25). Na função principal, peça para o 
// usuário informar quantos pães e quantos pasteis ele quer. Utilize as constantes 
// simbólicas que representam os preços dos produtos para fazer o cálculo de quanto 
// o usuário vai pagar, e mostre o resultado na tela.
// // Pães&Cia 
 
// // Quantos pães? 5 
// // Quantos pastéis? 4 
 
// // O total das compras é R$2.50

#include <iostream>
using namespace std;

#define PAO 0.30
#define PASTEL 0.25

int main(){
    float paes, pasteis, total;
    system("chcp 65001 > nul");
    cout << "Pães&Cia" << endl << endl;

    cout << "Quantos pães? ";
    cin >> paes;
    cout << "Quantos pastéis?";
    cin >> pasteis;

    total = (paes * PAO) + (pasteis * PASTEL);

    cout << "O total das compras é R$" << total << endl;

    system("pause");
}