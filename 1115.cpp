/*
* Autor: Gisleude Linhares
* Algoritmo: URI Online Judge | 1115 | Quadrante
* Data: 05/11/2016
*/
#include <iostream>

using namespace std;

int main(){
  int x = 1; // setando valor qualquer em x para entrar no loop
  int y = 1; // setando valor qualquer em y para entrar no loop

  while(x != 0 && y != 0){
    cin >> x >> y;

    if(x > 0 && y > 0){ // primeiro quadrante
      cout << "primeiro" << endl;
    }
    else if(x < 0 && y > 0){ // segundo quadrante
      cout << "segundo" << endl;
    }
    else if(x < 0 && y < 0){ // terceiro quadrante
      cout << "terceiro" << endl;
    }
    else if(x > 0 && y < 0){ // quarto quadrante
      cout << "quarto" << endl;
    }
  }
  return 0;
}
