#include <iostream>

using namespace std;

int main(){
	int i; // Variavel I e contador crescente
	int j = 60; // Variavel J decrescente
	
	for(i = 1; j >= 0; i = i+3, j = j-5){
		cout << "I="<< i << " J=" << j << endl;
	}
	return 0;
}
