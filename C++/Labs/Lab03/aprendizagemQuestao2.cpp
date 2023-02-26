// Construa um programa para exibir a tabuada de qualquer número n, sendo n um 
// número fornecido pelo usuário. 
// // Tabuada de n 
// // ------------ 
// // Entre com um número n (0 a 9): 2 
// // 2 x 0 = 0 
// // 2 x 1 = 2 
// // 2 x 2 = 4 
// // 2 x 3 = 6 
// // 2 x 4 = 8 
// // 2 x 5 = 10 
// // 2 x 6 = 12 
// // 2 x 7 = 14 
// // 2 x 8 = 16 
// // 2 x 9 = 18 

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Tabuada de n" << endl << "------------" << endl;
    cout << "Entre com um numero n (0 a 9): " ;
    cin >> n;

    for (int i = 0; i < 10 ; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    system("pause");
}