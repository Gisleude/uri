/*
* Autor: Gisleude Linhares
* Algoritmo: URI Online Judge | 1116 | Dividindo X por Y
* Data: 05/11/2016
*/
#include <iostream>

using namespace std;

int main(){
  int n; // quantidade de pares de valores inteiros (X e Y) que serão lidos em seguida
  int x,y; // valores inteiros que serão lidos
  float divisao; // variavel da divisao de x por y
  cin >> n ;

  for(int i=0; i < n; i++){
      cin >> x >> y; // pegando valores de x e y
      divisao = 0;

      if(y != 0 && float(x)/y){ // vendo se y é diferente de 0 e se x / y
        divisao = float(x)/y;
          if(divisao > 0){ // se o numero for positivo
            if(x/y){ // quebra galho pra imprimir inteiro com ".0" no final
              cout << divisao << ".0" << endl;
            }
            else{
              cout.precision(1);
              cout << divisao << endl;
            }
          }
          else{ // se o numero for negativo, 2 casas decimais
            cout.precision(2);
            cout << divisao << endl;
          }
      }
      if(y != 0 && x == 0){
        cout << "0.0" << endl;
      }
      if(y == 0){ // divisao por zero é impossivel
        cout << "divisao impossivel" << endl;
      }
  }

  return 0;
}
