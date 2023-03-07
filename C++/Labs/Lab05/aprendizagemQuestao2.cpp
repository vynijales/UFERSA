// Defina uma função que aumenta o salário de um funcionário em 15%. Na função 
// principal peça o salário atual do funcionário, passe este salário para uma função 
// que retorna o salário aumentado. Na função principal mostre o novo salário do 
// funcionário.
// // Salário atual: R$10000 
// // Salário ajustado para R$11500 

#include <iostream>
#define TAXA 0.15

using namespace std;


double aumentaSalario(double salarioAtual) {
    return salarioAtual + salarioAtual * TAXA;
}

int main() {
    double salarioAtual;
    system("chcp 65001 > nul");
    
    cout << "Salário atual: ";
    cin >> salarioAtual;
    
    cout << "Salário ajustado: " << aumentaSalario(salarioAtual) << endl;

    system("pause");
}