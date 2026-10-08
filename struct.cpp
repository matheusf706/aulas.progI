#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    struct pessoa {
        string nome;
        int idade;
        float salario;
    };

    pessoa p1 = {"Yulle", 19, 650.00};

    cout << "Pessoa 1:\n" 
         << "Nome: " << p1.nome << "\n" 
         << "Idade: " << p1.idade << "\n" 
         << "Salario: " << p1.salario << endl;

    return 0;
}
