#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

/*
3.  Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.

Exemplo: Para n=4 a saída deverá ser 1,3,5,7.
*/

int main(){
int n,impar=1;

cout << "Digite um numero inteiro positivo: ";
cin >> n;


for(int cont = 1;cont <= n;cont++){
    cout << impar << " - ";
    impar += 2;
        
    

}








    return 0;
}


