// Escreva uma função Inicializar() que se utiliza de quatro outras funções para 
// cumprir sua tarefa: a função deve escrever a mensagem “Inicializando sistema:”, 
// chamar a função ligar(), verificar() e ativar() e em seguida escrever “Inicialização 
// concluída”. Para simular o resultado da inicialização, a função Inicializar() deve 
// retornar um valor inteiro aleatório, obtido com uma chamada da função rand().  
 
// A função rand() pertence a biblioteca <cstdlib> e retorna um número aleatório 
// entre 0 e 32767 cada vez que é chamada. As funções ligar(), verificar() e ativar() 
// devem ser criadas para exibir mensagens, como no exemplo abaixo. 
 
// Caso o resultado retornado por Inicializar() seja maior que 16384, o programa 
// deve exibir “Sistema em funcionamento”, caso contrário ele deve exibir “Falha na 
// inicialização”. 

// // Inicializando Sistema: 
// // - Ligando dispositivos 
// // - Verificando integridade 
// // - Ativando processos 
// // Inicialização concluída. 
 
// // Sistema em funcionamento.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Protótipos das funções
void ligar();
void verificar();
void ativar();

int Inicializar() {

    srand(time(NULL)); // Inicializa o gerador de números aleatórios com a hora atual

    cout << "\nInicializando Sistema: " << endl;

    ligar();
    verificar();
    ativar();

    cout << "Inicializacao concluida." << endl << endl;
    return rand(); // Retorna um número aleatório entre 0 e 32767
}

void ligar() {
    cout << "- Ligando dispositivos " << endl;
}

void verificar() {
    cout << "- Verificando integridade " << endl;
}

void ativar() {
    cout << "- Ativando processos " << endl;
}

int main() {

    int resultado = Inicializar(); // Chama a função Inicializar() e armazena o resultado em uma variável

    if (resultado > 16384) {
        cout << "Sistema em funcionamento." << endl;
    } else {
        cout << "Falha na inicializacao." << endl;
    }
    
    system("pause"); // Desnecessário no Linux
}
