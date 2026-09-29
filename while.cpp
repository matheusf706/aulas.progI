#include <iostream>
using namespace std;

int main(){
    float nota;
    float maior = -1;
    int quantidade = -1;
    do{
        cin >> nota;
        quantidade++;
        if (nota>maior)
            maior = nota;
    }while (nota>=0);
    cout <<"Quantidade de candidatos:\n" << quantidade << endl;
    cout <<"Maior nota:\n" << maior << endl;
    return 0;
}
