#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iomanip>


using namespace std;







/*
7. Faça um programa para entrar com o salário de uma pessoa e imprimir o desconto do
INSS segundo a tabela abaixo:
a. Menor ou igual a R$ 900,00 - isento
b. Maior que R$ 900,00 e menor ou igual a R$ 1200,00 - 10%
c. Maior que R$ 1200,00 e menor ou igual a R$2000,00 - 15%
d. Maior que R$ 2000,00 – 27,5%
*/

int main(){
    float salario;

cout << "Digite o salario:";
cin >> salario;


if(salario <= 900){
    cout << "\nSalario:" << salario << "Isento"; 
}else if(salario <= 1200){
     cout << "\nSalario:" << salario << ",desconto do INSS = " << salario * 0.1 << " Salario apos desconto = " << setprecision(3) << salario - salario * 0.1;  
}else if(salario <= 2000){
     cout << "\nSalario:" << salario << ",desconto do INSS = " << salario * 0.15 << " Salario apos desconto = " << setprecision(3) << salario - salario * 0.15;  
}else{
     cout << "\nSalario:" << salario << ",desconto do INSS = " << salario * 0.275 << " Salario apos desconto = " << setprecision(3) << salario - salario * 0.275;  

}









    return 0;
}