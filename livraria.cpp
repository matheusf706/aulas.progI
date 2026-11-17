#include <iostream>
using namespace std;

struct livro{
    string titulo, autor;
    int quantidade;
    float preco;
};

int main(){
    const int acervo = 5;
    int i, posicao;
    string busca;

    livro livraria[acervo];
    for (i=0;i < acervo;i++){
        getline(cin,livraria[i].titulo);
        getline(cin,livraria[i].autor);
        cin >> livraria[i].quantidade >> livraria[i].preco;
        cin.ignore();
    }

    cout << "Título do livro de busca: ";
    getline(cin,busca);

    i = 0;
    posicao = -1;
    while((i < acervo) and (busca != livraria[i].titulo))i++;
    if (busca == livraria[i].titulo) posicao = i;

    if (posicao == -1) cout << "O livro não está dispnivel." << endl;
    else {
                cout <<"Preço: R$" << livraria[i].preco << endl;
                cout <<"Quantidade em estoque: " <<livraria[i].quantidade << endl;
    }
}
