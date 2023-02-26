// Corrija o código a seguir:

#include <iostream> 
using namespace std;

int main () { 
    int segundos, minutos; 
 
    cout << "Digite uma quantidade de minutos: "; 
    cin >> minutos; 
    segundos = minutos * 60;
    cout << "Existem " << segundos << " segundos em " << minutos << "."; // Existem 120 segundos em 2.
    cout << endl; 
 
    system("pause"); 
} 