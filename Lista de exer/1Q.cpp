#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iomanip>

/*1. As maçãs custam R$ 1,00 cada se forem compradas menos do que uma dúzia, e R$ 0,75
se forem compradas no mínimo doze. Escreva um programa que leia o número de maçãs
compradas, calcule e escreva o valor total da compra.*/


using namespace std;



int main(){

float maca;

cout << "Digite o numero de macas que deseja comprar:";
cin >> maca;

if(maca <12){
    maca *= 1.0;
}else{
    maca *= 0.75;
}

cout << "\nO valor total da compra eh R$:" << setprecision(3) << maca;





return 0;
}
