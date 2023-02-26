// Construa um programa para calcular a quantidade de dinheiro gasto por um 
// fumante. O programa deve ler o número de anos que o usuário fuma, o número de 
// cigarros fumados por dia e o preço de uma carteira com 20 cigarros. A saída deve 
// ser semelhante ao exemplo abaixo. 
// // A quantos anos você fuma? 10 
// // Quantos cigarros você fuma por dia? 5 
// // Qual o preço médio de uma carteira de cigarros? 6.50 
// // Você gastou até agora R$5931.25 com cigarros.

#include <iostream>
using namespace std;

int main() {
    int anos, cigarrosDia;
    float preco, total;
    cout << "A quantos anos voce fuma? ";
    cin >> anos;
    cout << "Quantos cigarros voce fuma por dia? ";
    cin >> cigarrosDia;
    cout << "Qual o preco medio de uma carteira de cigarros? ";
    cin >> preco;

    total = anos * cigarrosDia * 365 * preco / 20;

    cout << "Voce gastou ate agora R$" << total << " com cigarros." << endl;
    system("pause");
}