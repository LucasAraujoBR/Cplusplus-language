#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iomanip>


using namespace std;






/*6. Faça um programa que possa entrar com um número inteiro de 1 até 12 e imprima o
mês correspondente ou a mensagem: mês inexistente.*/


int main(){
    int numero;

    cout << "Digite um numero entre 1 e 12:";
    cin >> numero;


    switch (numero)
    {
    case 1:
        cout << "\n" << numero << " = " << "JANEIRO";
        break;
    case 2:
        cout << "\n" << numero << " = " << "FEVEREIRO";
        break;
    case 3:
        cout << "\n" << numero << " = " << "MARCO";
        break;
    case 4:
        cout << "\n" << numero << " = " << "ABRIL";
        break;
    case 5:
        cout << "\n" << numero << " = " << "MAIO";
        break;
    case 6:
        cout << "\n" << numero << " = " << "JUNHO";
        break;
    case 7:
        cout << "\n" << numero << " = " << "JULHO";
        break;
    case 8:
        cout << "\n" << numero << " = " << "AGOSTO";
        break;
    case 9:
        cout << "\n" << numero << " = " << "SETEMBRO";
        break;
    case 10:
        cout << "\n" << numero << " = " << "OUTUBRO";
        break;
    case 11:
        cout << "\n" << numero << " = " << "NOVEMBRO";
        break;
    case 12:
        cout << "\n" << numero << " = " << "DEZEMBRO";
        break;
    default:
        cout << "\n" << numero << " = " << "MES INEXISTENTE";
        break;
    }


    return 0;
}