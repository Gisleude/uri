/*
* Autor: Gisleude Linhares
* Algoritmo: URI Online Judge | 1134 | Tipo de Combustível
* Data: 06/11/2016
*/
#include <iostream>

using namespace std;

int main(){
  int opcao = 0; // variavel de opcao do usuario
  int v_alcool = 0; // variavel de quantidade de votos em alcool
  int v_gasolina = 0; // variavel de quantidade de votos em gasolina
  int v_diesel = 0; // variavel de quantidade de votos em diesel

  while(opcao != 4){ // enquanto a opção for diferente de 4, executar loop
    cin >> opcao; // pegando opção do usuario

    switch(opcao){ // casos de valores de opção
      case 1: // caso 1, aumentar valor de votos no alcool
        v_alcool++; break;
      case 2: // caso 2, aumentar valor de votos em gasolina
        v_gasolina++; break;
      case 3: // caso 3, aumentar valor de votos em diesel
        v_diesel++; break;
      case 4: // caso 4, printar "MUITO OBRIGADO"
        cout << "MUITO OBRIGADO" << endl;
    }
  }

  cout << "Alcool: " << v_alcool << endl;
  cout << "Gasolina: " << v_gasolina << endl;
  cout << "Diesel: " << v_diesel << endl;
  return 0;
}
