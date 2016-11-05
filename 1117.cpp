/*
* Autor: Gisleude Linhares
* Algoritmo: URI Online Judge | 1117 | Validação de Nota
* Data: 05/11/2016
*/
#include <iostream>

using namespace std;

int main(){
  int notas_validas = 0; // quantidade de notas validas registradas, iniciar com 0
  float nota; // notas que serão lidas
  float media = 0; // media das notas validas

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
  cout.precision(3); // setando precisao para 2 casas decimais
  cout << "media = " << media << endl; // imprimindo media
  return 0;
}
