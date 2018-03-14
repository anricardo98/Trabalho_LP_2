#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include "dados.hpp"
#include <ctime>
#include <cstdlib>

int main(int argc, char* argv[]){

	dados dado_1;

	dado_1.quantidade = atoi (argv[1]); //apos o execultavel digite o numero de vezes que voce deseja lançar

	dado_1.lancamento();

	return 0;
}
