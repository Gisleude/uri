/*
* Autor: Gisleude Linhares
* Algoritmo: URI Online Judge | 1101 | Sequência de Números e Soma
* Data: 05/11/2016
*/
#include <iostream>

using namespace std;

int main(){
  // Inicializando valores m e n não nulos para entrar no loop
  int m = 1;
  int n = 1;

  int aux; // variavel auxiliar
  int sum; // iniailizando soma para os inteiros entre m e n

  while(m > 0 && n > 0){
    cin >> m >> n; // pegando valores para m e n
    sum = 0; // inicializando soma com 0 para todo começo de loop
    if(m > 0 && n > 0){ // executar somente se m e n > 0
        if(m > n){ // trocando m e n
          aux = n;
          n = m;
          m = aux;
        }

        for(int i = m; i <= n; i++){ // percorrendo valores entre m e n
          sum = sum + i;
          cout << i << " ";
        }
        cout << "Sum=" << sum << endl; // printando soma
    }
  }
  return 0;
}
