/*
* Autor: Gisleude Linhares
* Algoritmo: URI Online Judge | 1132 | Múltiplos de 13
* Data: 06/11/2016
*/
#include <iostream>

using namespace std;

int main(){
  int x; // variavel x
  int y; // variavel y
  int aux; // variavel auxiliar para estabelecer o range
  int sum = 0; // soma dos numeros
  cin >> x >> y; // pegando valores de x e y

  if(x > y){ // trocando valores caso x seja maior que y
    aux = y;
    y = x;
    x = aux;
  }

  for(int i = x; i <= y; i++){ // percorrendo valores entre x e y, inclusive eles
    if(i%13 != 0){ // se o resto da divisão por 13 for diferente de 0, somar ao sum
      sum = sum + i;
    }
  }
  cout << sum << endl; // imprimindo sum
  return 0;
}
