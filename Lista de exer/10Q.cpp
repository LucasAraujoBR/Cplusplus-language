#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iomanip>
#include <iostream>



using namespace std;

/*
10. O cardápio de uma casa de lanches, especializada em sanduíches, é dado abaixo. Escreva
um programa que leia o código e a quantidade de cada item comprado por um cliente,
calcule e exiba o total a pagar.
*/

int main(){
char codigo;
int quantidade;

cout << "Menu:";
cout << "\nH - Hamburguer R$:1,50";
cout << "\nC - Cheeseburguer R$:1,80";
cout << "\nQ - Queijo Prato R$:1,00";
cout << endl;
cout << "Digite o codigo:";
cin >> codigo;
cout << "\nDigite a quantidade:";
cin >> quantidade;


switch (tolower(codigo))
{
case 'h':
    cout << "\nVoce comprou " << quantidade << " Hamburguer, total a pagar R$:" <<  setprecision(3) << 1.5 * quantidade; 
    break;
case 'c':
    cout << "\nVoce comprou " << quantidade << " Cheeseburguer, total a pagar R$:" <<  setprecision(3) <<1.8 * quantidade;
    break;
case 'q':
    cout << "\nVoce comprou " << quantidade << " Queijo Prato, total a pagar R$:" <<  setprecision(3) << 1 * quantidade;

default:
    break;
}


return 0;
}