#include <iostream>
using namespace std;

int main(){
    int a1 = 2; int b1 = 3;
    int a2 = 3; int b2 = 2;
    
    int a[2][3];
    for (int i = 0;i < 2;i++){
        for (int j = 0; j < 3;j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 2;i++){
        for (int j = 0;j < 3;j++){
            cout << a[i][j] <<" ";
        }
        cout << endl;
    }
    int b[3][2];
    for (int i = 0;i < 2;i++){
        for (int j = 0; j < 3;j++){
            b[j][i] = a[i][j];
        }
    }
    for (int i = 0;i < 3;i++){
        for (int j = 0;j < 2;j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    int c[2][2] = {};

    if (a2 == b1){
        for (int i = 0;i < a1;i++){
            for (int j = 0; j < b2;i++){
                for (int k = 0;k < a2;k++){
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        cout <<"Matriz resultante c: " << endl;
        for (int i = 0;i < a1;i++){
            for (int j = 0;j < b2;i++){
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Erro. Nao e possivel fazer a multiplicacao!" << endl;
    }

}
