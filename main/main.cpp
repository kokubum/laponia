#include <iostream>
#include <string>

using namespace std;

void criarTabuleiro(char tabuleiro[12][12] ){
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            if(i == 0 || i == 11){
                tabuleiro[i][j] = '*';
            } else if(i == 5 || i == 6){
                tabuleiro[i][j] = '~';
            } else if(j == 0 || j == 11){
                tabuleiro[i][j] = '*';
            } else {
                tabuleiro[i][j] = ' ';
            }
        }
    }
}

void printarTabuleiro(char tabuleiro[12][12] ){
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cout<<tabuleiro[i][j];
            if(j == 11){
                cout<<endl;
            }
        }
    }
    cout<<endl;
}

int main() {

    string nomeJogador1, nomeJogador2;

    char tabuleiro[12][12];

    cout<<"Bem vindo ao jogo Batalhas da Lapônia"<<endl<<endl;
    cout<<"Por favor, insira o nome do jogador 1: ";
    cin>>nomeJogador1;
    cout<<"Por favor, insira o nome do jogador 2: ";
    cin>>nomeJogador2;

    criarTabuleiro(tabuleiro);
    printarTabuleiro(tabuleiro);


}