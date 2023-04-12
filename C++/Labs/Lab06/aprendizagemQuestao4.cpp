#include <iostream> 
#include <string>

std::string multiplicar(std::string num1, std::string num2) 
{
    int tamanho1 = num1.size();
    int tamanho2 = num2.size();
    std::string resultado(tamanho1 + tamanho2, '0');

    for (int i = tamanho1 - 1; i >= 0; i--) {
        int carry = 0;
        for (int j = tamanho2 - 1; j >= 0; j--) {
            int temp = (num1[i] - '0') * (num2[j] - '0') + carry + (resultado[i + j + 1] - '0');
            carry = temp / 10;
            resultado[i + j + 1] = (temp % 10) + '0';
        }
        resultado[i] += carry;
    }

    size_t inicio = resultado.find_first_not_of('0');
    if (inicio != std::string::npos) {
        return resultado.substr(inicio);
    }
    return "0";
}

int main() 
{ 
    std::string num1 = "200530";
    std::string num2 = "420800";
    std::string resultado = multiplicar(num1, num2);
    std::cout << "Resultado: " << resultado << std::endl;
    return 0; 
}

// O programa da lista realiza a multiplicação de dois números inteiros long long e exibe o resultado tanto através do cálculo direto quanto da chamada de uma função.
// No entanto, o resultado exibido pelo cálculo direto pode estar incorreto, pois pode ocorrer um overflow devido à limitação do tamanho da variável.