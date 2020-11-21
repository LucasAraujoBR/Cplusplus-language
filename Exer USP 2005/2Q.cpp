#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iomanip>
#include <iostream>

using namespace std;

/*2.  Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.*/

int main (){
int n,contador,soma = 0;
cout << "Digite um numero inteiro positivo: ";
cin >> n;
while(n<0){
cout << "\n\nValor invalido,digite um numero inteiro: ";
cin >> n;
if(n>0){
//soma a sequencia de numeros ate o inteiro positivo N
for(contador = 0;contador <=n;contador++){
    cout << contador << " - ";
    soma += contador;

}
cout << endl;
cout << "\n\nA soma dos " << n << " primeiros numeros inteiros positivos eh: " << soma;
}else{
    cout << "\n\nValor invalido,digite um numero inteiro: ";
}
}

}