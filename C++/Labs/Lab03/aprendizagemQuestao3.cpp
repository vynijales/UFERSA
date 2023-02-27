// A energia gasta em calorias com uma atividade aeróbica qualquer obedece à 
// equação: E = METS × PESO × (Tempo de Atividade / 60). O tempo é dado em 
// minutos. O peso é dado em quilos. METS significa capacidade aeróbica e depende 
// do tipo de exercício. Ciclismo ou corrida leve tem pontuação METS = 7.0. A Natação 
// tem pontuação METS = 8.0. 
 
// Um usuário deve entrar com seu peso, quanto tempo ele corre por semana, quanto 
// tempo ele pedala por semana e quanto tempo ele nada por semana. O seu 
// programa deve retornar o número de calorias que este usuário queima por semana 
// com exercícios físicos. 

// // Digite seu peso em quilos: 75  
// // Digite o tempo de corrida: 2h30m 
// // Digite o tempo de ciclismo: 1h00m 
// // Digite o tempo de natação: 1h20m 
// // Você gastou um total de 2637.5 calorias. 

#include <iostream>
using namespace std;

int main() {
    float E = 0;
    int peso, horas, minutos;
    char c;

    cout << "Digite seu peso em quilos: ";
    cin >> peso;
    cout << "Digite o tempo de corrida: "; // METS = 7.0
    cin >> horas >> c >> minutos >> c;
    E += peso * (((horas * 60) + minutos)/60.0) * 7.0;
    cout << "Digite o tempo de ciclismo: "; // METS = 7.0
    cin >> horas >> c >> minutos >> c;
    E += peso * (((horas * 60) + minutos)/60.0) * 7.0; 
    cout << "Digite o tempo de natacao: "; // METS = 8.0
    cin >> horas >> c >> minutos >> c;
    E += peso * (((horas * 60) + minutos)/60.0) * 8.0;

    cout << "Voce gastou um total de " << E << " calorias." << endl;
               
    system("pause");
}