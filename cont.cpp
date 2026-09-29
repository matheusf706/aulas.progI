#include <iostream>
using namespace std;

int main(){
    int num;
    int quantidade = 0;

    cin >> num;

    while(num != 0){
        if(((num % 2)==0))
        quantidade++;
    cin >> num;
    }
    

    cout <<"Quantidade de pares:\n" << quantidade << endl;
    return 0;
}
