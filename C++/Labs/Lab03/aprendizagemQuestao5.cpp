// Construa um programa que peça ao usuário o horário atual. Declare variáveis para 
// receber a hora e os minutos separadamente. Após receber o horário atual, diga ao 
// usuário que o relógio dele está uma hora atrasado, e mostre o horário certo, com a 
// hora adiantada em uma hora. 
// // Que horas são? 10:54 
// // O seu relógio está atrasado. 
// // Agora são 11:54.

#include <iostream>
using namespace std;

int main() {
    int horaAtual, minAtual;
    char c;

    cout << "Que horas sao? ";
    cin >> horaAtual >> c >> minAtual;
    cout << "O seu relogio esta atrasado." << endl;
    cout << "Agora sao " << (horaAtual + 1) % 24 << c << minAtual << endl;

    system("pause");
}