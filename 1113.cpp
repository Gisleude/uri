/*
* Autor: Gisleude Linhares
* Algoritmo: URI Online Judge | 1113 | Crescente e Decrescente
* Data: 05/11/2016
*/
#include <iostream>

using namespace std;

int main(){
  int x = 1; // inicializando x com valor qualquer para entrar no while
  int y = 0; // inicializando y com valor diferente de x para entrar no while
  while(x != y){
    cin >> x >> y; // pegando valores de x e y
    if(x > y){ // verificando se ordem é decrescente
      cout << "Decrescente" << endl;
    }
    if(x < y){ // verificando se ordem é crescente
      cout << "Crescente" << endl;
    }
  }
  return 0;
}
