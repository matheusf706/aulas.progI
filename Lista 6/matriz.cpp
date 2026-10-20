#include <iostream>
using namespace std;

int main(){
    
    int m[2][3];
    for (int i = 0;i < 2;i++){
        for (int j = 0; j < 3;j++){
            cin >> m[i][j];
        }
    }
    for (int i = 0; i < 2;i++){
        for (int j = 0;j < 3;j++){
            cout << m[i][j] <<" ";
        }
        cout << endl;
    }
    int t[3][2];
    for (int i = 0;i < 2;i++){
        for (int j = 0; j < 3;j++){
            t[j][i] = m[i][j];
        }
    }
    for (int i = 0;i < 3;i++){
        for (int j = 0;j < 2;j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3;i++){
        for (int j =0;j < 2;j++){
            cout << m[j][i];
        }
    }

}
