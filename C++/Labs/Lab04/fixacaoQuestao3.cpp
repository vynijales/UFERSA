// Escreva um programa que chame uma função de nome UmTres(). Esta função deve
// exibir na tela a palavra “Um”, chamar a função de nome Dois(), e então exibir a
// palavra “Três”. A função Dois() deve exibir a palavra “Dois” na tela. A função
// main() deve mostrar a frase “Começando agora:” , chamar a função UmTres() e em
// seguida mostrar a palavra “Pronto!”. A saída deve ser a seguinte:
// // Começando agora:
// // Um Dois Três
// // Pronto!

#include <iostream>
using namespace std;

void dois() {
    cout << "Dois ";
}
void umTres() {
    cout << "Um ";
    dois();
    cout << "Tres" << endl;
}

int main() {
    cout << "Comecando agora " << endl;
    umTres();
    cout << "Pronto!" << endl;
    
    system("pause");
}
