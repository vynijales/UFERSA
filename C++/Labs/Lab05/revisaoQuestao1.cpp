// versão 2 
#include <iostream> 
using namespace std; 
 
void alarme(); 
void lerSenha(); 
 
int main() 
{ 
    alarme(); 
    lerSenha();
    cout << "Finalizando...\n\a";
    system("pause");
} 
 
void alarme() 
{ 
    cout << "Iniciando...\n"; 
    cout << '\a'; 
} 
 
void lerSenha() 
{ 
    cout << "Senha: "; 
    int senha; 
    cin >> senha; 
} 