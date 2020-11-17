#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iomanip>


using namespace std;







/*4. Entrar com a sigla do estado de uma pessoa e imprimir uma das mensagens:
a. Centro Oeste
b. Região Sudeste
c. Região Sul
d. Nordeste
e. Norte*/


int main(){
char sigla,sigla2;

cout << "Digite a sigla do seu estado:";
cin >> sigla >> sigla2;

tolower(sigla);
tolower(sigla2);
if(tolower(sigla) == 'p' && tolower(sigla2) == 'r'|| tolower(sigla) == 'r' && tolower(sigla2) == 's' || tolower(sigla) == 's' && tolower(sigla2) == 'c'){
    cout << "\nREGIAO SUL";
}else if(tolower(sigla) == 'm' && tolower(sigla2) == 't'|| tolower(sigla) == 'm' && tolower(sigla2) == 's'||tolower(sigla) == 'g' && tolower(sigla2) == 'o'||tolower(sigla) == 'd' && tolower(sigla2) == 'f')
{
    cout << "\nCENTRO OESTE";
}else if(tolower(sigla) == 'r' && tolower(sigla2) == 'j'||tolower(sigla) == 's' && tolower(sigla2) == 'p'||tolower(sigla) == 'm' && tolower(sigla2) == 'g'||tolower(sigla) == 'e' && tolower(sigla2) == 's'){
    cout << "\nREGIAO SUDESTE";
}else if(tolower(sigla) == 'r' && tolower(sigla2) == 'o'||tolower(sigla) == 'a' && tolower(sigla2) == 'c'||tolower(sigla) == 'a' && tolower(sigla2) == 'm'||tolower(sigla) == 'p' && tolower(sigla2) == 'a'||tolower(sigla) == 't' && tolower(sigla2) == 'o'||tolower(sigla) == 'a' && tolower(sigla2) == 'p'||tolower(sigla) == 'r' && tolower(sigla2) == 'r'){
    cout << "\nNORTE";
}else if(tolower(sigla) == 'b' && tolower(sigla2) == 'a'||tolower(sigla) == 'p' && tolower(sigla2) == 'i'||tolower(sigla) == 'm' && tolower(sigla2) == 'a'||tolower(sigla) == 'c' && tolower(sigla2) == 'e'||tolower(sigla) == 's' && tolower(sigla2) == 'e'||tolower(sigla) == 'a' && tolower(sigla2) == 'l'||tolower(sigla) == 'p' && tolower(sigla2) == 'e'||tolower(sigla) == 'p' && tolower(sigla2) == 'b'||tolower(sigla) == 'r' && tolower(sigla2) == 'n'){
    cout << "\nNORDESTE";
}



return 0;
}