// Utilize instruções cin para ler o valor de horas e minutos para variáveis diferentes.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int hora, min;
    char c;

    cout << "Que horas sao? ";
    cin >> hora >> c >> min;
    cout << "Sao " << setfill('0') << setw(2) << hora << c << setfill('0') << setw(2) << min << endl;
    // Adiciona um zero a esquerda quando necessario, para preencher o "width" (largura) definido em setw().
    system("pause");
}
