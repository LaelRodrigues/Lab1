/** 
 * @file	fatorial.cpp
 * @brief	Arquivo corpo com implementacao da funcao que
 					calcula o fatorial de um numero
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	14/08/2017
 * @date 	15/08/2017
 */


#include "fatorial.h"

/**
 * @brief Funcao que calcula o fatorial de um numero
 * @param valor Numero que tera seu fatorial calculado
 * @return Fatorial do numero
 */
int fatorial(int valor) {

	if(valor <= 0) {
		return 1;
	}
	else {
		return valor * fatorial(valor-1);
	}
}
