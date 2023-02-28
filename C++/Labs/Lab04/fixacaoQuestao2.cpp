// Escreva uma função Linha() que, usando um único cout e sem usar repetições ou
// saltos de linha, produza uma linha de tamanho fixo formada por 10 caracteres de
// hífen. Escreva também uma função Pequena(), Media() e Grande() que façam uso
// da função Linha() e de saltos de linha para obter linhas com 10, 20 e 30 hifens
// respectivamente. O programa deve produzir a saída abaixo. A função Linha() não
// deve ser chamada diretamente pela função main(), apenas Pequena(), Media() e
// Grande() devem fazer uso dela.
// // ----------
// // --------------------
// // ------------------------------
// // Programação de Computadores
// // ------------------------------
// // --------------------
// // ----------

#include <iostream>
using namespace std;

void Linha() {
    cout << "----------";
}

void Pequena() {
    Linha();
    cout << endl;
}

void Media() {
    Linha();
    Linha();
    cout << endl;
}

void Grande() {
    Linha();
    Linha();
    Linha();
    cout << endl;
}

int main() {
    Pequena();
    Media();
    Grande();
    cout << "Programação de Computadores" << endl;
    Grande();
    Media();
    Pequena();
    
    system("pause");
}
