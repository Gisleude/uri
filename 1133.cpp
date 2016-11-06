/*
* Autor: Gisleude Linhares
* Algoritmo: URI Online Judge | 1133 | Resto da Divisão
* Data: 06/11/2016
*/
#include <iostream>

using namespace std;

int main(){
  int x; // variavel x
  int y; // variavel y
  int aux; // variavel auxiliar para estabelecer o range
  cin >> x >> y; // pegando valores de x e y

  if(x > y){ // trocando valores caso x seja maior que y
    aux = y;
    y = x;
    x = aux;
  }

  for(int i = x+1; i < y; i++){ // percorrendo valores entre x e y, sem incluir eles
    if(i%5 == 2 || i%5 == 3){ // se o resto da divisão por 5 for 2 ou 3, imprimir na tela
      cout << i << endl; // imprindo i
    }
  }
  return 0;
}
