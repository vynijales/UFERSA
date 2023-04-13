// Construa uma função isShort() para verificar se um número cabe em 16 bits e 
// uma função isInt() para verificar se um número cabe em 32 bits. Para alcançar 
// esse objetivo, as funções devem receber o valor sempre em uma quantidade de bits 
// maior e usar as constantes definidas no arquivo de cabeçalho <climits> para 
// verificar se os números estão dentro das faixas MIN e MAX dos respectivos tipos. 
// As funções devem retornar um valor booleano true ou false. Construa um 
// programa para testar as funções, como nos exemplos de execução abaixo. 

// // Digite um valor inteiro: 300 
// // 300 cabe em 16 bits  
// // 300 cabe em 32 bits

// // Digite um valor inteiro: 70000 
// // 70000 não cabe em 16 bits  
// // 70000 cabe em 32 bits

// // Digite um valor inteiro: 5000000000 
// // 5000000000 não cabe em 16 bits  
// // 5000000000 não cabe em 32 bits

#include <iostream>
#include <climits>

using namespace std;

bool isShort(long long num) {
    return num >= SHRT_MIN && num <= SHRT_MAX;
}

bool isInt(long long num) {
    return num >= INT_MIN && num <= INT_MAX;
}

int main() {
    long long num;
    system("chcp 65001 > nul");

    cout << "Digite um número para verificar se cabe em 16 bits: ";
    cin >> num;
    cout << (isShort(num) ? "Cabe em 16 bits." : "Não cabe em 16 bits.") << endl;

    cout << "Digite um número para verificar se cabe em 32 bits: ";
    cin >> num;
    cout << (isInt(num) ? "Cabe em 32 bits." : "Não cabe em 32 bits.") << endl;

    return 0;
}
