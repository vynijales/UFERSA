// Escreva um programa que peça ao usuário para entrar com um valor para hora e 
// outro valor para minuto. A função main() deve então passar estes dois valores 
// para uma função que mostra os valores na tela no formato hh:mm.
// // Entre com o número de horas: 9 
// // Entre com o número de minutos: 45 
// // Agora são 9:45 

#include <iostream>
using namespace std;

int main() {
    int horas, minutos;
    char c = ':';
    cout << "Entre com o numero de horas: ";
    cin >> horas;
    cout << "Entre com o numero de minutos: ";
    cin >> minutos;
    
    cout << "Horario agora: " << horas << c << minutos << endl;

}