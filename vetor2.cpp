#include <iostream>
using namespace std;

int main(){
    int vetor[5];
    
    for (int i = 0; i < 5; i++){
        cin >> vetor[i];
    }
    
    for (int i = 0; i < 5; i++){
        vetor[i] = vetor[i] * 10;
        cout << vetor[i] << " ";
    }
    return 0;
}