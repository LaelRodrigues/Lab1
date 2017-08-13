/** 
 * @file	volume.h
 * @brief	Arquivo cabecalho com os prototipos das funcoes que realizam
 *   				o calculo do volume de viguras geometricas espaciais
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	13/08/2017
 * @date 	13/08/2017
 */


#ifndef VOLUME_H
#define VOLUME_H

/** brief Valor referentea a constante PI */
#define PI 3.1415

#include <iostream>

using std::cin;
using std::cout;
using std::endl;


/**
 * @brief Funcao que calcula o volume de uma piramide
 * @param area_b Medida da area da base da piramide
 * @param altura Medida da altura da piramide
 * @return Volume da piramide
 */
float volPiramide(float area_b, float altura);


/**
 * @brief Funcao que calcula o volume de um cubo
 * @param aresta Medida da aresta do cubo
 * @return Volume do cubo
 */
float volCubo(float aresta);


/**
 * @brief Funcao que calcula o volume de um paralelepipedo
 * @param aresta1 Medida da primeira aresta do paralelepipedo
 * @param aresta2 Medida da segunda aresta do paralelepipedo
 * @param aresta3 Medida da terceira aresta do paralelepipedo
 * @return Volume do paralelepipedo
 */
float volParalelepipedo(float aresta1, float aresta2, float aresta3);


/**
 * @brief Funcao que calcula o volume de uma Esfera
 * @param raio Medida do raio da esfera
 * @return Volume da esfera
 */
float volEsfera(float raio);

#endif