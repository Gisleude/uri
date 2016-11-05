/*
* Autor: Gisleude Linhares
* Algoritmo: URI Online Judge | 1097 | Sequencia IJ 3
* Data: 03/11/2016
*/


#include <iostream> //cout, cin...;

using namespace std;

int main(){
        int i; // Variavel I
        int j; // Variavel J
	int dif = 6; // Variavel de diferença entre J e I
	int vezes_j; // Quantidade de vezes para repetir J

	// For do i, percorrer até o 9
        for(i = 1; i <= 9; i = i+2){
		vezes_j = 3; // Repetir 3x cada ciclo
                // For do j, percorrer 3 vezes cada iteração com o i
		for(j = i+dif; vezes_j > 0;j--, vezes_j--){
                        // Printando sequencia
                        cout << "I="<< i << " J=" << j << endl;
                }
        }
        return 0;
}

