// A empresa Viagens&Turismo possui uma linha de ônibus fazendo o trecho
// Mossoró-Natal. Considerando que as viagens são feitas sempre dentro de um
// mesmo dia, elabore um programa que permita ao usuário informar o momento de
// partida e de chegada (hora e minuto) do ônibus. O programa deve calcular o tempo
// total da viagem (em horas e minutos).
// // Digite o horário de partid (HH:MM): 10:50
// // Digite o horário de chegada (HH:MM): 14:20
// // O tempo total de viagem foi 3 horas e 30 min.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    system("chcp 65001 > nul");
    int hours, minutes, total;
    char c;
    
    cout << "Digite o horário de partida (HH:MM): ";
    cin >> hours >> c >> minutes;
    
    total = hours * 60 + minutes;
    
    cout << "Digite o horário de chegada (HH:MM): ";
    cin >> hours >> c >> minutes;
    
    total = total - (hours * 60 + minutes);
    if (total < 0) {
        total *= -1;
    }
    
    cout << "O tempo total de viagem foi " << setfill('0') << setw(2) << total/60 << " horas e " << total % 60 << " minutos." << setfill('0') << setw(2) << endl;
    
    system("pause");
    
    return 0;
}