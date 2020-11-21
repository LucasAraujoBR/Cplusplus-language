#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iomanip>
#include <iostream>

using namespace std;
/*1.  Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados.*/

int main(){
int numero;
cout << "Digite um valor e obtenha seu quadrado:";
cin >> numero;
while (numero != 0)
{
    if(numero > 0){
        cout << "O quadrado do numero " << numero << " eh: "<< numero * numero;
        cout << endl;
        cout << "Digite um valor e obtenha seu quadrado:";
        cin >> numero;



    }
}

cout << "\nPrograma finalizado!";


    return 0;
}