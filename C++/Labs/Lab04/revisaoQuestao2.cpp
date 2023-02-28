// Uma forma de obter um número pseudoaleatório mais imprevisível é usar um
// valor de semente que mude com o tempo. A biblioteca <ctime> possui uma função
// time() que retorna uma quantidade de segundos transcorrida (geralmente desde
// 1 de janeiro de 1970) quando passamos NULL como argumento da função.
// // srand(time(NULL));
// Por fim, exiba a mensagem GRANDE se o número obtido for maior que 16834 e
// PEQUENO caso contrário.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    int n;
    srand(time(NULL));
    n = rand() % 32000;
    
    cout << "Gerando numeros pseudoaleatorios:" << endl;
    if (n < 16834) {
        cout << n << " PEQUENO" << endl;
    } else {
        cout << n << " GRANDE" << endl;
    }

    system("pause");
}
