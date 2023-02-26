// Utilize apenas uma instrução cin para ler as três informações abaixo para variáveis 
// diferentes. Multiplique o valor das variáveis altura, largura e comprimento para 
// achar o volume do cubo.

#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "Insira as dimensoes da figura geometrica (altura, largura e altura): ";
    cin >> a >> b >> c;
    cout << "Volume: " << a * b * c << endl;
    system("pause");
}

