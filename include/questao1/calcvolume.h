/** 
 * @file	calcvolume.h
 * @brief	Arquivo cabecalho com os prototipos das funcoes que solicita 
 *   				ao usuario os dados para o calculo do volume de figuras espaciais
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	13/08/2017
 * @date 	13/08/2017
 * @sa 		volume.h
 */
#ifndef CALCVOLUME_h
#define CALCVOLUME_H

/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do volume da piramide
 * @param area_b Medida da area da base da piramide
 * @param altura Medida da altura da piramide
 */
void dadosVolPiramide(float area_b, float altura);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do volume do cubo
 * @param aresta Medida da aresta do cubo 
 */
void dadosVolCubo(float aresta);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do volume do paralelepipedo
 * @param aresta1 Medida da primeira aresta do paralelepipedo
 * @param aresta2 Medida da segunda aresta do paralelepipedo
 * @param aresta3 Medida da terceira aresta do paralelepipedo
 */

void dadosVolParalelepipedo(float aresta1, float aresta2, float aresta3);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do volume do esfera
 * @param raio Medida do raio da esfera 
 */
void dadosVolEsfera(float raio);

#endif