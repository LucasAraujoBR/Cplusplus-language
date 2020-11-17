#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iomanip>


using namespace std;




/*3. Escreva um programa para ler 2 valores inteiros e uma das seguintes operações a serem
executadas (codificada da seguinte forma: 1.Adição, 2.Subtração, 3.Divisão,
4.Multiplicação). Calcular e escrever o resultado dessa operação sobre os dois valores
lidos. Observação: Considere que só serão lidos os valores dos índices 1, 2, 3 ou 4.*/


int main(){
int valor1,valor2,opcao;

cout << "Digite o primeiro valor inteiro:";
cin >> valor1;
cout << "\nDigite o segundo valor inteiro";
cin >> valor2;

cout << endl;
if(valor1 >0 && valor2 >0){
cout << "Menu de operacoes:\n";
cout << "1 - ADICAO\n";
cout << "2 - SUBTRACAO\n";
cout << "3 - DIVISAO\n";
cout << "4 - MULTIPLICACAO\n";
cin >> opcao;

switch (opcao)
{
case 1:
    cout << valor1 << " + " << valor2 << " = " << valor1 + valor2;
    break;
case 2:
    cout << valor1 << " - " << valor2 << " = " << valor1 - valor2;
    break;
case 3:
    if(valor1/valor2 != 0){
        cout << valor1 << " / " << valor2 << " = " << valor1 / valor2;
    }else{
        cout << "\nResultado decimal ainda nao implementado!";
    }
    
    

    break;   
case 4:
    cout << valor1 << " * " << valor2 << " = " << valor1 * valor2;
    break; 
default:
    break;
}



}else{
    cout << "\nValores invalidos!";
}


    return 0;
}