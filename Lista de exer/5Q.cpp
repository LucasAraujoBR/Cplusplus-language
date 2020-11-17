#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iomanip>


using namespace std;

/*
5. A partir dos valores da aceleração (a em m/s2), da velocidade inicial (v0 em m/s) e do
tempo de percurso (t em s). Calcular e exibir a velocidade final de automóvel em km/h.
Exibir mensagem de acordo com a tabela:
Velocidade em Km/h (V) Mensagem
V <= 40 Veículo muito lento
40 < V <= 60 Velocidade permitida
60 < V <= 80 Velocidade de cruzeiro
80 < V <= 120 Veículo rápido
V > 120 Veículo muito rápido
Fórmula para o cálculo da velocidade em m/s: V = v0 + a. t
*/

int main(){

float V,vo,a,t;

cout << "Digite a aceleração (a em m/s2):";
cin >> a;
cout << "\nDigite a velocidade inicial (v0 em m/s):";
cin >> vo;
cout << "\nDigite o tempo de percurso (t em s):";
cin >> t;

V = vo + a * t;







if(V<=40){
    cout << "\nVeiculo muito lento";
}else if(V<=60){
    cout << "\nVelocidade permitida";
}else if(V<=80){
    cout << "\nVelocidade de cruzeiro";
}else if(V<=120){
    cout << "\nVeiculo rapido";
}else{
    cout << "\nVeiculo muito rapido";
}





















    return 0;
}