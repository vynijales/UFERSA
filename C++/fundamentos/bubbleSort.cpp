#include <iostream>

using namespace std;

template <typename T>
void exibir(T vetor, int size) {
    for (int i = 0; i< size; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

template <typename T>
void bubbleSort (T * vetor, int size) {
    T aux; 
    for (int i = 0; i < (size - 1); i++) {
        for (int j = 0; j < (size - 1); j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }    
} 

int main()
{
    int vetor[] = {4,1,3,2,5};
    exibir(vetor, 5);
    bubbleSort(vetor, 5);
    exibir(vetor, 5);
    return 0;
}
