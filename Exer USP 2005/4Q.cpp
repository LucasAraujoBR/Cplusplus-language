#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

/* Dados um inteiro x e um inteiro não-negativo n, calcular x^n.*/

int main(){

int n,x;
cout << "Digite um inteiro X e um inteiro nao negativo N: ";
cin >> x >> n;
if(n>=0){

cout << "\n" << x << " elevado ah " << n << " eh = " << pow(x,n);

}else{
    cout << "\n" << n << " eh negativo.";
}







    return 0;
}