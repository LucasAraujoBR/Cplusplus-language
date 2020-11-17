#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iomanip>


using namespace std;





/*2. Escreva um programa para ler o número de lados de um polígono regular e a medida do
lado (em cm). Calcular e imprimir o seguinte:

a. Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor do seu perímetro.
b. Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.
c. Se o número de lados for igual a 5 escrever PENTÁGONO.
Observação: Considere que o usuário só informará os valores 3, 4 ou 5.*/



int main(){

int numeroDeLados,medidaDoLado;

cout << "Digite o numero de lados do poligono:";
cin >> numeroDeLados;
cout << "\nDigite a medida do lado (em cm):";
cin >> medidaDoLado;

if(numeroDeLados <=5 && numeroDeLados >=3){
    if(numeroDeLados == 3){
        cout << "\nTRIANGULO de perimetro:"<< medidaDoLado * 3 << "cm"  ;
    }else if(numeroDeLados == 4){
        cout << "\nQUADRADO de perimetro:" << medidaDoLado * medidaDoLado  << "cm"  ;
    }else{
        cout << "\nPENTAGONO."  ;
    }

}else{
    cout << "\nInfelizmente o valor ainda nao foi implementado";
}










    return 0;
}