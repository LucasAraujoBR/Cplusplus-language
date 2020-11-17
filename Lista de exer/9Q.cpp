#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iomanip>
#include <iostream>



using namespace std;


/*
9. Em uma eleição presidencial existem quatro candidatos. Os votos são informados
através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte
codificação:
❑ 1,2,3,4 = voto para os respectivos candidatos;
❑ 5 = voto nulo;
❑ 6 = voto em branco;
❖ Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:
❑ total de votos para cada candidato;
❑ total de votos nulos;
❑ total de votos em branco;
❑ Como finalizador do conjunto de votos, tem-se o valor 0.
*/
void limpaTela(){
    system("cls");
}

int main(){
int opcao,candidato1 = 0,candidato2 = 0,candidato3 = 0,candidato4 = 0,nulo = 0,branco = 0,rodada = 0;

while(rodada == 0){

cout << "Eleicoes:";
cout << "\n1 - Joao campos";
cout << "\n2 - Marilia Arraes";
cout << "\n3 - Mendonca";
cout << "\n4 - Patricia";
cout << "\n5 - Nulo";
cout << "\n6 - Branco";
cout << "\n0 - Finalizar votacao";
cin >> opcao;
limpaTela();
switch (opcao)
{
case 0:
    rodada = 1;
    break;
case 1:
    candidato1++;
    break;
case 2:
    candidato2++;
    break;
case 3:
    candidato3++;
    break;
case 4:
    candidato4++;
    break;
case 5:
    nulo++;
    break;
case 6:
    branco++;
    break;
default:
    cout << "\nValor invalido\n";
    break;
}
}

cout << "\nTotal de votos dos candidatos:";
cout << "\n 1 - " << candidato1;
cout << "\n 2 - " << candidato2;
cout << "\n 3 - " << candidato3;
cout << "\n 4 - " << candidato4;
cout << "\n 5 - (NULOS) " << nulo;
cout << "\n 6 - (BRANCOS) " << branco;
if(candidato1 == candidato2 || candidato3 == candidato4 || candidato1 == candidato3 || candidato1 == candidato4 || candidato2 == candidato3 || candidato2 == candidato4){
    cout << "\nSEGUNDO TURNO!";
}else
{
if(candidato1 > candidato2 && candidato1 > candidato3 && candidato1 > candidato4){
    cout << "\nVencedor: Joao Campos";
}else if(candidato2 > candidato3 && candidato2 > candidato4){
    cout << "\nVencedor: Marilia Arraes";
}else if(candidato3 >candidato4){
    cout << "\nVencedor: Mendonca";
}else{
    cout << "\nVencedor: Patricia";
}
}

    return 0;
}