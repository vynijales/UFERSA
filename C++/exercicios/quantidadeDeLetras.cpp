/*  Construa um programa que conte a quantidades de letras de uma palavra. 
 Exemplo: “casa”     Resultado: c=1  a =2  s =1 */

#include <iostream>
#include <cstring>
#include <bitset>

using namespace std;

int main() {
    char str[] = "casa";
    const int length = strlen(str);
    cout << "A string '" << str << "' tem " << length << " caracteres." << endl;

    bitset<256> caracteresAnalisados; // Objeto que possui todos os caracteres da tablema ascii, cada caractere está atribuido o valor falso por padrão 

    for (int i = 0; i < length; i++) {
        int contCaractere = 0;
        bool foiAnalisado = caracteresAnalisados[str[i]];
        if (!foiAnalisado) {
            for (int j = 0; j < length; j++) {
                if (str[i] == str[j]) {
                    contCaractere++;
                }
            }
            caracteresAnalisados[str[i]] = true; // Define o caractere como analisado no objeto
            cout << "A letra [" << str[i] << "] possui " << contCaractere << " caracteres na palavra " << str << endl;
        }
    }

    return 0;
}
