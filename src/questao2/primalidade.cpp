/** 
 * @file	fatorial.h
 * @brief	Arquivo corpo com a implementacao da funcao que
 					calcula maior primo anterior a um dado numero
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	14/08/2017
 * @date 	15/08/2017
 */

#include "primalidade.h"


/**
 * @brief Funcao que calcula o maior primo anterior a um dado
 *				numero
 * @param valor Numero que tera o maior primo anterior a ele calculado
 * @param i Varialvel auxiliar para testar a primalidade do numero 
 * @return O maior primo
 */
int maiorPrimo(int valor, int i){
	if(valor <= i) {
		return valor;
	}
	else if (valor % i == 0){
		return maiorPrimo(valor-1, 2);
	}
	else {
		return maiorPrimo(valor, i+1);
	}
}