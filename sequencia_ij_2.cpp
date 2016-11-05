/*
* Autor: Gisleude Linhares
* Algoritmo: URI Online Judge | 1096 | Sequencia IJ 2
* Data: 03/11/2016
*/


#include <iostream>

using namespace std;

int main(){
        int i; // Variavel I
        int j; // Variavel J

	// For do i, percorrer até o 9
        for(i = 1; i <= 9; i = i+2){
		// For do j, percorrer 3 vezes cada vez
                for(j = 7; j >= 5; j--){
			// Printando sequencia
			cout << "I="<< i << " J=" << j << endl;
		}
        }
        return 0;
}


