// Escreva um programa que produza a saída abaixo. Para atingir esse objetivo crie
// uma função que exiba “Sorria!” uma única vez e chame-a na função principal
// quantas vezes for preciso para gerar a saída.
// // Sorria! Sorria! Sorria! Sorria!
// // Sorria! Sorria!
// // Sorria!

#include <iostream>
using namespace std;

void repetirPalavra(int n) {
    for (int i = 0; i < n ; i++){
        cout << "Sorria! ";
    }
    cout << endl;
}

int main() {
  
    repetirPalavra(4);
    repetirPalavra(2);
    repetirPalavra(1);
  
    system("pause");
}
