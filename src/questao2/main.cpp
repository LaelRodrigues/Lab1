/** 
 * @file	main.cpp
 * @brief   arquivo corpo de teste das funcoes para calcular o fatorial
 * 					de um numero e o maior primo anterior a um dado numero
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	14/08/2017
 * @date	15/08/2017
 */
#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::atoi;

#include "primalidade.h"
#include "fatorial.h"

/**
 * @brief	funcao principal
 */
int main(int argc, char *argv[]) {

	if(argc != 2) {
		cout << "Nao foram digitados os paramentros necessarios!" << endl;
		cout << "como usar: ./questao2 <valor>" << endl;
		return EXIT_FAILURE;
	}

	int valor;
	valor = atoi(argv[1]);

	int result = fatorial(valor);
	cout << "Maior numero primo anterior ao fatorial de " << valor << " (" << result << ") eh " << maiorPrimo(result-1, 2) << endl;
	return 0;
}
