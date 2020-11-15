#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;
void menuPrincipal();
void clearWindown(){
    system("cls");
}

void iniciaTabuleiro(char tabuleiro[10][10],char mascara[10][10]){
    int linha,coluna;   

//Agua em todo tabuleiro do jogo
for(int linha = 0;linha<10;linha++){
    for(int coluna = 0;coluna <10;coluna++){
        tabuleiro[linha][coluna] = 'A';
        mascara[linha][coluna] = '*';
    }
}



}

void exibeIndicacoes(){
     for(int cont = 0;cont < 10;cont++){
        if(cont == 0){
            cout << "     ";
        }
        cout << cont << "  ";
    }
    cout << "\n";
     for(int cont = 0;cont < 10;cont++){
        if(cont == 0){
            cout << "     ";
        }
        cout << "|  ";
    }
    cout << "\n";
    
}


void imprimeTabuleiro(char tabuleiro[10][10],char mascara[10][10], bool monstraGabarito){

    int linha,coluna; 
//imprimindo o tabuleiro do jogo
for(int linha = 0;linha<10;linha++){
    cout << linha << " - ";
    for(int coluna = 0;coluna <10;coluna++){
    //cout << " " << tabuleiro[linha][coluna] << " ";
    cout << " " << mascara[linha][coluna] << " ";
    }
    cout << "\n";
}
if(monstraGabarito == true){
//imprimindo o gabarito do jogo
for(int linha = 0;linha<10;linha++){
    cout << linha << " - ";
    for(int coluna = 0;coluna <10;coluna++){
    cout << " " << tabuleiro[linha][coluna] << " ";
    }
    cout << "\n";
}
}

}

void posicionaEmbarcacoes(char tabuleiro[10][10]){
int linhaAleatoria,colunaAleatoria,vazio;
//adicionando barco ao tabuleiro numa posição aleatória 
for(int aux = 0;aux<10;aux++){
        do{
        linhaAleatoria = rand()%10;
        colunaAleatoria = rand()%10;
        if(tabuleiro[linhaAleatoria][colunaAleatoria] == 'A'){
        tabuleiro[linhaAleatoria][colunaAleatoria] = 'B';
        vazio++;
        }
        }while(vazio < 10);
        
}



}

void verificaBala(char tabuleiro[10][10],int linhaJogador,int colunaJogador,int *pontos,string *mensagem){

    //verifica se acertou o barco ou não
    switch(tabuleiro[linhaJogador][colunaJogador])
    {
    case 'B':
        *pontos = *pontos + 50;
        *mensagem = "Voce acertou um barco! (+ 50 pts)";
        break;
    case 'A':
        *mensagem = "Voce acertou a agua!";
        break;
    }


}

void jogo(string nomeDoJogador){

    char tabuleiro[10][10],mascara[10][10];                         //tabuleiro do jogo
    int linha,coluna;                                               //linha e coluna do jogo
    int linhaJogador,colunaJogador;                                 //escolhas do jogador linha e coluna
    bool gameOver = false;                                          //situação do jogo
    int pontos = 0;                                                 //pontos do jogo
    string mensagem = "Batalha Naval";                              //mensagem pro jogador
    int tentativas = 0,maxTentativas = 20;                          //tentativas do jogador
    int opcao;                                                      //opções de final de jogo
    


//Cria o tabuleiro
iniciaTabuleiro(tabuleiro,mascara);

posicionaEmbarcacoes(tabuleiro);

while(tentativas < maxTentativas){
    clearWindown();
    exibeIndicacoes();
    //imprimindo o tabuleiro
    imprimeTabuleiro(tabuleiro,mascara,false);

    cout << "\nPontos:" << pontos << " ,Tentativas restantes:" << maxTentativas - tentativas;
    cout << "\n"<< mensagem;

    linhaJogador = -1;
    colunaJogador = -1;

    while((linhaJogador <0 || colunaJogador < 0) || (linhaJogador >9 || colunaJogador > 9)){

    cout << "\n" << nomeDoJogador << ", digite uma linha:";
    cin >> linhaJogador;
    cout << "\n" << nomeDoJogador << ", digite uma coluna:";
    cin >> colunaJogador;



    }




    
    verificaBala(tabuleiro,linhaJogador,colunaJogador,&pontos,&mensagem);
    //substitui a mascara pela interação
    mascara[linhaJogador][colunaJogador] = tabuleiro[linhaJogador][colunaJogador];

    tentativas++;

}
    cout << "\nFim de jogo";
    cout << "\n1 - Jogar novamente";
    cout << "\n2 - Voltar para o menu";
    cout << "\n3 - Sair";
    cin >> opcao;


    switch (opcao)
    {
    case 1:
        jogo(nomeDoJogador);
        break;
    case 2:
        menuPrincipal();
        break;
    case 3:
        cout << "Voce saiu do jogo!";
        break;
    
    }








}

void menuPrincipal(){
    clearWindown();
string nomeDoJogador;
int opcao = 0;

while(opcao < 1 || opcao >3){
    cout << "Batalha Naval\n";
    cout << "1 - Jogar\n";
    cout << "2 - Sobre\n";
    cout << "3 - Sair\n";
    cin >> opcao;
    clearWindown();

    switch(opcao)
    {
    case 1:
        cout << "Qual seu nome? ";
        cin >> nomeDoJogador;

        jogo(nomeDoJogador);
        break;
    case 2:
        cout << "\nJogo desenvolvido por Lucas em 2020\n";
        break;
    case 3:
        cout << "\nJogo finalizado\n";
        break;        
    default:
        cout << "\nOpcao invalida,tente novamente!\n";
        break;
    }

}

}



int main(){
clearWindown();

srand((unsigned)time(NULL));

menuPrincipal();








return 0;

}
