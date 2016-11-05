/*
* Autor: Gisleude Linhares
* Algoritmo: URI Online Judge | 1099 | Soma de Ímpares Consecutivos II
* Data: 05/11/2016
*/
#include <iostream>

using namespace std;

int main(){
  int n; //  quantidade de casos de teste que vem a seguir
  int x,y; // somar impares existentes entre eles
  int aux; // variavel auxiliar
  int sum = 0; // variavel para guardar soma

  cin >> n; //pegando quantidade de testes

  // percorrendo n vezes
  for(int k = 0; k < n; k++){
    cin >> x;
    cin >> y;

    if(x > y){ // trocando valores
      aux = y;
      y = x;
      x = aux;
    }
    for(int i = x+1 ; i < y; i++){ // somando valores impares
      if(i%2 != 0){
        sum = sum + i;
      }
    }
    cout << sum << endl; //printando soma
    sum = 0;
  }
  return 0;
}
