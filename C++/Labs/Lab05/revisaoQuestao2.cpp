#include <iostream> 
using namespace std; 
 
int num; 
 
int f(); 
int g(); 
 
int main() 
{ 
    num = 1; 
    cout << f() + g() + num << endl; // 8

    num = 1; 
    cout << g() + f() + num << endl; // 12
} 
 
int f() 
{ 
    num = num + 3; 
    return num; 
} 
 
int g() 
{ 
    num = 2; 
    return num; 
}