/*
* Autor: Gisleude Linhares
* Algoritmo: URI Online Judge | 1098 | Sequencia IJ 4
* Data: 03/11/2016
*/


#include <iostream> //cout, cin...;

using namespace std;

int main(){
        float i; // Variavel I
        float j; // Variavel J
	float somar = 0.2; // Somar valor as variaveis
	int vezes_j; // Quantidade de vezes que o J repete
        for(i = 0; i <= 2.2; i = i+somar){
		vezes_j = 3;
		for(j = 1; j <= vezes_j ; j++){
			cout << "I=" << i << " J=" << j+i << endl;
		}
        }
        return 0;
}
