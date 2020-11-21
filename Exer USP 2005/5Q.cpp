#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <iostream>
#include <math.h>

using namespace std;


/*5.  Uma loja de discos anota diariamente durante o mês de março
 a quantidade de discos vendidos. Determinar em que 
dia desse mês ocorreu a maior venda e qual foi a quantidade de discos vendida nesse dia.*/


int main(){
int discosVendidos=0,diaMaisVendido = 0,maiorVenda = 0,vendaAnterior = 0;


for(int cont = 1;cont <= 30;cont++){
vendaAnterior = discosVendidos;

cout << "\nDia " << cont << " Digite o numero de discos vendidos: ";
cin >> discosVendidos;
if(discosVendidos > vendaAnterior){
diaMaisVendido = cont;
maiorVenda = discosVendidos;

}
}

cout << endl;
cout << "A maior venda de discos = " << maiorVenda << " ,ocorreu no dia = " << diaMaisVendido; 






    return 0;
}