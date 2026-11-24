#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int x = 5;
    int *p;

    p = &x;

    cout << "valor de x: " << x << endl;
    cout << "endereço de x: " << &x << endl;
    cout << "valor de p (endereco): " << p << endl;
    cout << "valor apontado por p: " << *p << endl;

    return 0;
}