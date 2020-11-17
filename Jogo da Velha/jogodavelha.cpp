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

void iniciaTabuleiro(char tabuleiro[3][3]){
    int linha,coluna;
    for(linha =0;linha<3;linha++){
    for(coluna =0;coluna<3;coluna++){
        tabuleiro[linha][coluna] = '-';
    }
    
}



}

void imprimeTabuleiro(char tabuleiro[3][3]){
    int linha,coluna;  
    clearWindown();

    for(linha =0;linha<3;linha++){
    for(coluna =0;coluna<3;coluna++){
        cout << tabuleiro[linha][coluna] <<"  ";
    }
    cout << "\n";
}


}

int confereTabuleiro(char tabuleiro[3][3]){
int linha,coluna;
//Confere linha
for(linha = 0; linha < 3;linha++){
    if(tabuleiro[linha][0] == 'X' && tabuleiro[linha][0] == tabuleiro[linha][1] && tabuleiro[linha][1] == tabuleiro[linha][2]){
    return 1;      
    }else if(tabuleiro[linha][0] == 'O' && tabuleiro[linha][0] == tabuleiro[linha][1] && tabuleiro[linha][1] == tabuleiro[linha][2]){
    return 2;
    }
}



//confere coluna
for(coluna = 0; coluna < 3;coluna++){
    if(tabuleiro[0][coluna] == 'X' && tabuleiro[0][coluna] == tabuleiro[1][coluna] && tabuleiro[1][coluna] == tabuleiro[2][coluna]){
    return 1;      
    }else if(tabuleiro[0][coluna] == 'O' && tabuleiro[0][coluna] == tabuleiro[1][coluna] && tabuleiro[1][coluna] == tabuleiro[2][coluna]){
    return 2;


}


}


//confere diagonal principal
if(tabuleiro[0][0] != '-' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]){
    if(tabuleiro[0][0] == 'X'){
    return 1; 
}else{
    return 2;  
    }
}

//confere diagonal secundária 
if(tabuleiro[0][2] != '-' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]){
    if(tabuleiro[0][2] == 'X'){
    return 1;
}else{
    return 2;
    }
}


}

void exibeInstrucoes(){
    cout << "\n     Instrucoes:";
    cout << "\n    (Linha,Coluna)";
    cout << "\n (0,0) | (0,1) | (0,2)";
    cout << "\n (1,0) | (1,1) | (1,2)"; 
    cout << "\n (2,0) | (2,1) | (2,2)";



}


void jogo(string nomeDoJogador,string nomeDoJogador2){

char tabuleiro[3][3];                            //tabuleiro do jogo
int linha,coluna;                                //linha e coluna do jogo
int linhaJogador,colunaJogador,posicaoJogada;    //escolhas de linha e coluna do jogador
int gameOver = 1;                                //estado do jogo
int vezDoJogador = 1;                            //1-X , 2-O
int rodada = 0;                                  //rodada do jogo
int opcao;                                       //se quer reiniciar o jogo ou encerrar
bool posicionouJogada;                           //verifica se ele colocou o X ou o O

//popula o tabuleiro 
iniciaTabuleiro(tabuleiro);
while(rodada < 9 && gameOver == 1){
//imprime o tabuleiro
imprimeTabuleiro(tabuleiro);

exibeInstrucoes();

cout << "\nRodada:" << rodada << "\n";   

posicionouJogada = false;




while(posicionouJogada == false){


//escolha do jogador

if(vezDoJogador == 1){
    //escolha do jogador X
    cout << nomeDoJogador << ",digite uma linha:";
    cin >> linhaJogador;
    cout << nomeDoJogador << ",digite uma coluna:";
    cin >> colunaJogador;
    if(tabuleiro[linhaJogador][colunaJogador] == '-'){
    tabuleiro[linhaJogador][colunaJogador] = 'X';
    vezDoJogador = 2;
    posicionouJogada = true;
    }
}else{
    //escolha do jogador O
    cout << nomeDoJogador2 << ",digite uma linha:";
    cin >> linhaJogador;
    cout << nomeDoJogador2 << ",digite uma coluna:";
    cin >> colunaJogador;
    if(tabuleiro[linhaJogador][colunaJogador] == '-'){
    tabuleiro[linhaJogador][colunaJogador] = 'O';
    vezDoJogador = 1;
    posicionouJogada = true;
    }
}

}

if(confereTabuleiro(tabuleiro) == 1){
    cout << "\n" << nomeDoJogador << " venceu!";
    gameOver = 2;
}else if(confereTabuleiro(tabuleiro) == 2){
    cout << "\n" << nomeDoJogador2 << " venceu!";
    gameOver = 2;
}




//número de rodadas
    rodada++;
}
    cout << "\n\nFim de Jogo!";
    cout << "\nDeseja Reiniciar o jogo ?";
    cout << "\n1 - Sim";
    cout << "\n2 - Nao";
    cin >> opcao;

    switch (opcao)
    {
    case 1:
        menuPrincipal();
    break;
    
    default:
        cout << "Saiu do jogo!";
        break;
    }


}
    



void menuPrincipal(){
    clearWindown();
string nomeDoJogador;
string nomeDoJogador2;
int opcao = 0;

while(opcao < 1 || opcao >3){
    cout << "Jogo da Velha\n";
    cout << "1 - Jogar\n";
    cout << "2 - Sobre\n";
    cout << "3 - Sair\n";
    cin >> opcao;
    clearWindown();

    switch(opcao)
    {
    case 1:
        cout << "Qual o nome do jogador X ? ";
        cin >> nomeDoJogador;
        cout << "Qual o nome do jogador O ? ";
        cin >> nomeDoJogador2;
        jogo(nomeDoJogador,nomeDoJogador2);
        
        break;
    case 2:
        cout << "\nJogo desenvolvido por Lucas em 2020\n";
        cout << "\n1 - Voltar";
        cout << "\n2 - Sair";
        cin >> opcao;
        if(opcao == 1){
            menuPrincipal();
        }
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