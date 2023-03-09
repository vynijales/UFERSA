// Escreva um programa que crie quatro variáveis, uma para cada um dos tipos
// inteiros mostrados abaixo. O programa deve mostrar quantos bytes cada tipo
// ocupa e calcular a quantidade total de memória utilizada pelas variáveis criadas.
// Use espaços nas cadeias de caracteres para produzir a saída no formato abaixo:
// // short: 2 bytes
// // int: 4 bytes
// // long: 4 bytes
// // long long: 8 bytes
// // Total: 18 bytes

#include <iostream>
using namespace std;

int main() {
    system("chcp 65001 > nul");
    short int s;
    int i;
    long l;
    long long int ll;
    
    cout << "short: " << sizeof(s) << " bytes" << endl; // short: 2 bytes
    cout << "int: " << sizeof(i) << " bytes" << endl; // int: 4 bytes
    cout << "Long: " << sizeof(l) << " bytes" << endl; // long: 4 bytes
    cout << "Long Long: " << sizeof(ll) << " bytes" << endl; // long long: 8 bytes
    cout << "Total: " << sizeof(s) + sizeof(i) + sizeof(l) + sizeof(ll) << " bytes" << endl; // total: 18 bytes
    
    system("pause");
}

