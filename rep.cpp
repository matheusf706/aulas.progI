#include <iostream>
using namespace std;

int main() {
    int nota;
    cout << "Digite uma nota de 0 a 10: ";
    cin >> nota;
    
    while(nota < 0 or nota > 10) {
        cout << "Nota inválida. Digite novamente: ";
        cin >> nota;
    }
    if (nota >= 5){
        cout <<"Sua nota foi aceita, você está aprovado!" << endl;
    } else {
        cout <<"Sua nota não foi aceita ou você não está aprovado..." << endl;
    }
    return 0;
}

/*
estrutura de repetição: while

while(expressão de controle){
    bloco de repetição
}

do{
    bloco de repetição
}while (expressão de controle)
*/
