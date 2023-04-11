// Modifique o programa abaixo de forma que ele continue usando 16 bits para a 
// variável x e 32 bits para a variável y, mas sem apresentar overflow:
// // #include <iostream> 
 
// // int main() 
// // { 
// //     short x = 1; 
// //     x = x + 32767; 
// //     std::cout << "x = " << x << std::endl; 
 
// //     int y = 2'147'483'647; 
// //     y = y + 1; 
// //     std::cout << "y = " << y << std::endl; 
 
 
// //     return 0; 
// // } 

#include <iostream> 

int main() 
{ 
    short x = 1; 
    x = x + 32767; 
    x = (x + 1) % 65536; // aritmética modular para evitar overflow
    std::cout << "x = " << x << std::endl; 

    long y = 2147483647; 
    y = y + 1; 
    std::cout << "y = " << y << std::endl; 

    return 0; 
}
