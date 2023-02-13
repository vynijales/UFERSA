#include <iostream>

int main(){
    int a, b;
    double result, soma, subtracao, multiplicacao,
    divisao, quociente, resto;

    std::cout << "Digite o primeio número: ";
    std::cin >> a;
    std::cout << "Digite o segundo número: ";
    std::cin >> b;
    
    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;
    quociente = a / b;
    resto = a % b;

    result = a + b;
    std::cout << "Soma: " << result << "\n";
    
	result = a - b;
    std::cout << "Subtracao: " << result << "\n";

	result = a * b;
    std::cout << "Multiplicacao: " << result << "\n";

    std::cout << "Divisao: " << (float) a / b << "\n";

    result = a / b;
    std::cout << "Quociente: " << result << "\n";

	result = a % b;
    std::cout << "Resto: " << result << "\n";

}