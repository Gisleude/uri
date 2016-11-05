/*
* Autor: Gisleude Linhares
* Algoritmo: URI Online Judge | 1118 | Várias Notas Com Validação
* Data: 05/11/2016
*/
#include <iostream>
#include <iomanip> // se precisar usar setprecision() no lugar de cout.precision()

using namespace std;

int main(){
  int opcao = 1; // valor da opcao, iniciar com 1
  int notas_validas; // quantidade de notas validas registradas
  double nota; // notas que serão lidas
  double media = 0; // media das notas validas

  while(opcao == 1){ // checando a opcao do usuario
    notas_validas = 0; // quantidade de notas validas iniciar com 0
    while(notas_validas != 2){ // checando quantas notas validas ja apareceram
      cin >> nota; // pegando valor da nota
      if(nota < 0 || nota > 10){ // checando se nota não é valida
        cout << "nota invalida" << endl;
      }
      else{ // se for valida
        media = media + nota; // adicionando nota a media
        notas_validas++; // aumentando valor de notas validas
      }
    }
    media = media/2; // fazendo media das notas
    cout << fixed; // fixando precisao da nota
    cout.precision(2); // setando precisao para 2 casas decimais
    cout << "media = " << media << endl; // imprimindo media
    media = 0; // setando media pra 0 caso aja um novo calculo
    cout << "novo calculo (1-sim 2-nao)" << endl;
    cin >> opcao; // pegando valor da opcao
    while(opcao < 1 || opcao > 2){ // checando se valor da opção é valido
      cout << "novo calculo (1-sim 2-nao)" << endl;
      cin >> opcao;
    }
  }
  return 0;
}
