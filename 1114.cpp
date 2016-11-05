/*
* Autor: Gisleude Linhares
* Algoritmo: URI Online Judge | 1114 | Senha Fixa
* Data: 05/11/2016
*/
#include <iostream>

using namespace std;

int main(){
  int password = 0; // definindo senha e setando valor qualquer para entrar no loop

  while(password != 2002){
    cin >> password; // pegando valor da senha
    if(password == 2002){ // verificando se senha é verdadeira
      cout << "Acesso Permitido" << endl;
    }
    else{
      cout << "Senha Invalida" << endl;
    }
  }
  return 0;
}
