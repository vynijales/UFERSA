/*  39.   Construa um programa que conte a quantidades de vezes que as palavras de uma frase aparecem. 
 Exemplo: “estude muito sempre sempre estude”     Resultado: estude=2   muito=1  sempre=2 */
 
#include <iostream>
#include <string>

using namespace std;

bool isIn(string palavras[], int tamanho, string palavra) {
    for (int i = 0; i < tamanho; i++) {
        if (palavras[i] == palavra) {
            return true;
        }
    }
    return false;
}

int main() {
    string frase = "estude muito sempre sempre estude";
    string palavras[100];
    int contagem[100];
    int tamanho = 0;

    int inicioDaPalavra = 0;
    int fimDaPalavra = frase.find(" ");
    while (fimDaPalavra != string::npos) {
        string palavra = frase.substr(inicioDaPalavra, fimDaPalavra - inicioDaPalavra);
        if (isIn(palavras, tamanho, palavra)) {
            int posicao = -1;
            for (int i = 0; i < tamanho; i++) {
                if (palavras[i] == palavra) {
                    posicao = i;
                    break;
                }
            }
            contagem[posicao]++;
        } else {
            palavras[tamanho] = palavra;
            contagem[tamanho] = 1;
            tamanho++;
        }
        inicioDaPalavra = fimDaPalavra + 1;
        fimDaPalavra = frase.find(" ", inicioDaPalavra);
    }
    string palavra = frase.substr(inicioDaPalavra, frase.length() - inicioDaPalavra);
    if (isIn(palavras, tamanho, palavra)) {
        int posicao = -1;
        for (int i = 0; i < tamanho; i++) {
            if (palavras[i] == palavra) {
                posicao = i;
                break;
            }
        }
        contagem[posicao]++;
    } else {
        palavras[tamanho] = palavra;
        contagem[tamanho] = 1;
        tamanho++;
    }

    for (int i = 0; i < tamanho; i++) {
        cout << palavras[i] << " = " << contagem[i] << endl;
    }

    return 0;
}
