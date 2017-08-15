/** 
 * @file	volume.cpp
 * @brief	Arquivo corpo com a implementacao das funcoes que realizam
 *   				o calculo do volume de viguras geometricas espaciais
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	13/08/2017
 * @date 	13/08/2017
 * @sa		volume.h
 */

#include "volume.h"

/**
 * @brief Funcao que calcula o volume de uma piramide
 * @param area_b Medida da area da base da piramide
 * @param altura Medida da altura da piramide
 * @return Volume da piramide
 */
float volPiramide(float area_b, float altura){
	return area_b * altura * 1/3; 
}


/**
 * @brief Funcao que calcula o volume de um cubo
 * @param aresta Medida da aresta do cubo
 * @return Volume do cubo
 */
float volCubo(float aresta){
	return aresta * aresta * aresta;
}


/**
 * @brief Funcao que calcula o volume de um paralelepipedo
 * @param aresta1 Medida da primeira aresta do paralelepipedo
 * @param aresta2 Medida da segunda aresta do paralelepipedo
 * @param aresta3 Medida da terceira aresta do paralelepipedo
 * @return Volume do paralelepipedo
 */
float volParalelepipedo(float aresta1, float aresta2, float aresta3){
	return aresta1 * aresta2 * aresta3;
}


/**
 * @brief Funcao que calcula o volume de uma Esfera
 * @param raio Medida do raio da esfera
 * @return Volume da esfera
 */
float volEsfera(float raio){
	return 4/3 * PI * raio * raio * raio;
}