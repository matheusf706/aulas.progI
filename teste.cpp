#include <iostream>
#include <string>
using namespace std;

int main(){
    int  num, i;
    float  vetor[20];

    cout << "Quantidade de números: "; cin >> num;

    cout << "Digite os números:\n";
    float soma = 0;
    for (i = 0;i < num;i++)
        cin >> vetor[i];
    for (i = 0;i < num;i++)
        soma += vetor[i];
    for (i = 0;i < num; i++)
        cout << vetor[i] << " ";
    cout << endl;
    cout << "Media = " <<soma/num << endl;
    return 0;
}