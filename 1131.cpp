/*
* Autor: Gisleude Linhares
* Algoritmo: URI Online Judge | 1131 | Grenais
* Data: 06/11/2016
*/
#include <iostream>

using namespace std;

int main(){
  int opcao; // valor da opcao, iniciar com 1
  int n_grenais = 0; // quantidade de Grenais
  int inter; // placar do Internacional
  int gremio; // placar do gremio
  int v_inter = 0; // quantidade de vitorias do Internacional, inicializando com 0
  int v_gremio = 0; // quantidade de vitorias do Gremio, inicializando com 0
  int empates = 0; // quantidade de empates nos grenais

  cin >> inter >> gremio; // pegando placares
  if(inter > gremio){ // se o Internacional marcar mais gols
    v_inter++; // aumentar vitorias do inter
  }
  else if(gremio > inter){ // se o Gremio marcar mais gols
    v_gremio++; // aumentar vitorias do gremio
  }
  else{ // se o Internacional e o Gremio marcar a mesma quantidade de gols
    empates++; // aumentar em 1 o valor de empates
  }
  n_grenais++; // aumentando quantidade de grenai
  cout << "Novo grenal (1-sim 2-nao)" << endl;
  cin >> opcao; // pegando opcao do usuario

  while(opcao == 1){ // checando a opcao do usuario
    cin >> inter >> gremio; // pegando placares
    if(inter > gremio){ // se o Internacional marcar mais gols
      v_inter++; // aumentar vitorias do inter
    }
    else if(gremio > inter){ // se o Gremio marcar mais gols
      v_gremio++; // aumentar vitorias do gremio
    }
    else{ // se o Internacional e o Gremio marcar a mesma quantidade de gols
      empates++; // aumentar em 1 o valor de empates
    }
    n_grenais++; // aumentando quantidade de grenais
    cout << "Novo grenal (1-sim 2-nao)" << endl;
    cin >> opcao; // pegando opcao do usuario
  }

  cout << n_grenais << " grenais" << endl; // printando quantidade de grenais
  cout << "Inter:" << v_inter << endl; // printando quantidade de vitorias do Internacional
  cout << "Gremio:" << v_gremio << endl; // printando quantidade de vitorias do Gremio
  cout << "Empates:" << empates << endl; // printando quantidade de empates

  if(v_inter > v_gremio){ // se o inter tiver vencido mais
    cout << "Inter venceu mais" << endl; // printar inter como vencedor
  }
  else if(v_gremio > v_inter){ // se o gremio tiver vencido mais
    cout << "Gremio venceu mais" << endl; // printar gremio como vencedor
  }
  else{ // se a quantidade de vitorias para os dois forem iguais, não houve vencedor
    cout << "Nao houve vencedor" << endl; // printar que não houve vencedor
  }
  return 0;
}
