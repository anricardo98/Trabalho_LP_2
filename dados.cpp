#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "dados.hpp"
#include <ctime>
#include <cstdlib>

void dados::lancamento(){
	int i, numero;
	srand (time(NULL));
	for (i = 0; i < dados::quantidade; i++){
		numero = rand() % 6;
		numero++;
		cout <<"Lancamento: "<< i + 1 << endl << "Numero: " << numero << endl;
	}
}
