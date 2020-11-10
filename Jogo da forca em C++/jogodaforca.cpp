#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <time.h>


using namespace std;

void clearWindown(){
system("cls");

}

void exibeStatus(string palavraComMascara,int tamanhoDaPalavra, int tentativasRestantes,string letrasJaArriscadas,string mensagem){
cout << mensagem;
cout << "\nPalavra: " << palavraComMascara << " (Tamanho:" << tamanhoDaPalavra << ")";
cout << "\nTentativas: " << tentativasRestantes;

cout << "\nLetras ja Arriscadas: ";
for(int contador = 0; contador< letrasJaArriscadas.size();contador++){
    cout << letrasJaArriscadas[contador] << ", ";
}


}
string retornaPalavraAleatoria(){
string palavras[9] = {"azul","amarelo","vermelho","rosa","amarelo","preto","branco","marrom","verde"};
int aleatorio = rand()%9;

return palavras[aleatorio];

}

string retornaPalavraComMascara(string palavra, int tamanhoDaPalavra){
    string palavraComMascara;
for(int i = 0;i<tamanhoDaPalavra;i++){
    palavraComMascara += "_";
}
return palavraComMascara;
}

int jogar(int numeroDeJogadores){
string palavra;
if(numeroDeJogadores == 1){
palavra = retornaPalavraAleatoria();

}else{
    cout << "\nDigite uma palavra:";
    cin >> palavra;
}

int tamanhoDaPalavra = palavra.size();
int opcao;
string palavraComMascara = retornaPalavraComMascara(palavra,tamanhoDaPalavra);
int tentativas = 0,maximoDeTentativas = 10;
char letra;
string mensagem  = "Bem vindo ao Jogo da Forca!";
string letrasJaArriscadas;
bool jaDigitouLetra = false,acertouLetra = false;
while (palavra != palavraComMascara && maximoDeTentativas - tentativas > 0)
{
//cout << "A palavra eh: " << palavra << " (Tamanho:" << tamanhoDaPalavra << ")";
clearWindown();
exibeStatus(palavraComMascara,tamanhoDaPalavra,maximoDeTentativas - tentativas,letrasJaArriscadas,mensagem);
cout << "\n\nDigite uma letra:";
cin >> letra;
jaDigitouLetra = false;
for(int cont=0;cont<tentativas;cont++){
    if(letrasJaArriscadas[cont] == letra){
        mensagem = "Essa letra ja foi digitada,por favor tente outra";
        jaDigitouLetra = true;
    }

}

if(jaDigitouLetra == false){
letrasJaArriscadas += tolower(letra);

for(int k=0;k<tamanhoDaPalavra;k++){
    if(palavra[k] == tolower(letra)){
        palavraComMascara[k] = palavra[k];
        
        acertouLetra = true;
    }
}
tentativas++;
if(acertouLetra == false){
    mensagem = "Voce errou uma letra!";
}else{
    mensagem = "Voce acertou uma letra!";
    acertouLetra = false;
}
}

}
if(palavra == palavraComMascara){
    clearWindown();
    cout << "Parabens voce venceu!";
    cout << "\nDeseja Reiniciar o jogo ?";
    cout << "\n1 - sim";
    cout << "\n2 - nao\n";
    cin >> opcao;
    return opcao;

}else{
    clearWindown();
    cout << "Que pena,voce perdeu!";
    cout << "\nDeseja Reiniciar o jogo ?";
    cout << "\n1 - sim";
    cout << "\n2 - nao\n";
    cin >> opcao;
    return opcao;
}

}

void menuPrincipal(){
 int opcao;

    clearWindown();
    while(opcao < 1 || opcao > 3){
    cout <<"BEM VINDO!\n";
    cout <<"1 - JOGAR\n";
    cout <<"2 - JOGAR EM DUPLA\n";
    cout <<"3 - SOBRE\n";
    cout <<"4 - SAIR\n";
    cout <<"Digite sua opcao: ";
    cin >> opcao;
    clearWindown();
    switch (opcao)
    {
    case 1:
        if(jogar(1) == 1){
            menuPrincipal();
        }
        break;
    case 2:
        if(jogar(2) == 1){
            menuPrincipal();
        }
        break;
    case 3:
        clearWindown();
        cout << "jogo desenvolvido por Lucas em 2020.\n";
        cout << "\n1 - Voltar";
        cout << "\n2 - Sair\n";
        cin >> opcao;
        if(opcao == 1){
            menuPrincipal();
        }
        break;
    case 4:
        cout << "Voce saiu do jogo!\n";
        break;
    default:
        cout << "Opcao Invalida,tente novamente!\n";
        break;
    }


    }
    
}


int main(){

    srand( (unsigned)time(NULL));

    menuPrincipal();


    return 0;
   
}