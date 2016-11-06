/*
* Autor: Gisleude Linhares
* Algoritmo: URI Online Judge | 1142 | PUM
* Data: 06/11/2016
*/
#include <iostream>

using namespace std;

int main(){
  int n; // quantidade de linhas de saída que serão apresentadas na execução do programa
  int k = 1; // numeros que serão mostrados na tela, começando por 1

  cin >> n; // pegando de numero de linhas

  for(int i = 0; i < n; i++){ // percorrendo o numero de linhas
    for(int j = 0; j < 3; j++, k++){ // printando os numeros k na tela e incrementando 1 ao valor de k cada vez
      cout << k << " ";
    }
    cout << "PUM" << endl; // printando PUM
    k++; // incrementando 1 ao valor de k para ocultar o 4 valor da linha(PUM no lugar)
  }
  return 0;
}
