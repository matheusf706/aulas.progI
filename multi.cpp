#include <iostream>
using namespace std;

int main(){
    int a1 = 2; int b1 = 3;
    int a2 = 3; int b2 = 2;
    
    cout << "Elementos da Matriz A:\n";
    int a[a1][a2];
    for (int i = 0;i < a1;i++){
        for (int j = 0; j < a2;j++){
            cin >> a[i][j];
        }
    }
    cout << endl;

    cout << "Elementos da Matriz B:\n";
    int b[b1][b2];
    for (int i = 0;i < b1;i++){
        for (int j = 0; j < b2;j++){
            cin >> b[i][j];
        }
    }

    cout << "Matriz A: \n";
    for (int i = 0; i < a1;i++){
        for (int j = 0;j < a2;j++){
            cout << a[i][j] <<" ";
        }
        cout << endl;
    }

    cout << "Matriz B: \n";
    for (int i = 0; i < b1;i++){
        for (int j = 0;j < b2;j++){
            cout << b[i][j] <<" ";
        }
        cout << endl;
    }
    int c[2][2] = {};

    if (a2 == b1){
        for (int i = 0;i < a1;i++){
            for (int j = 0; j < b1;j++){
                int elemento = 0;
                for (int k = 0;k < a2;k++){
                    elemento += a[i][k] * b[k][j];
                }
                c[i][j] = elemento;
            }
        }

        cout <<"Matriz resultante c: " << endl;
        for (int i = 0;i < a1;i++){
            for (int j = 0;j < b2;j++){
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Erro. Nao e possivel fazer a multiplicacao!" << endl;
    }

}
