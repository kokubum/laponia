#include <iostream>
#include <string>
#include <random>

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

bool sortearJogador(int numeros[], int qtdNumeros, int limite){
    int qtd0 = 0;
    int qtd1 = 0;

    srand(time(NULL));

    for(int i=0;i<qtdNumeros;i++){
        numeros[i] = rand() % limite;
    }

    for(int i=0;i<qtdNumeros;i++){
        if(numeros[i] == 0){
            qtd0++;
        } else {
            qtd1++;
        }
    }

    if(qtd0 > qtd1){
        return true; //Jogador 1 começa
    } else {
        return false; //Jogador 2 começa
    }
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

    cout<<"Jogadores registrados!"<<endl;
    cout<<"Preenchimento do tabuleiro: será sorteado o primeiro jogador a colocar sua peça"<<endl;
    cout<<"e será feita de forma alternada até que os 8 guerreiros de cada lado sejam colocados."<<endl;
    cout<<"O formato de preenchimento segue o padrao x,x onde o primeiro x é a linha em que deve ser"<<endl;
    cout<<"colocada a peça e o outro x a coluna, caso o jogador coloque em uma posição inválida será passada a vez"<<endl;
    cout<<"a cada turno do posicionamento o tabuleiro será exibido, boa sorte."<<endl<<endl;
    printarTabuleiro(tabuleiro);

    bool turno; //true para jogador 1, else para jogador 2

    int numeros[501];
    turno = sortearJogador(numeros, 501, 2);

    if(turno){
        cout<<nomeJogador1<<" "<<"começa."<<endl;
    } else {
        cout<<nomeJogador2<<" "<<"começa."<<endl;
    }
}