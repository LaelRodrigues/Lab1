/** 
 * @file	calcarea.h
 * @brief	Arquivo cabecalho com os prototipos das funcoes que solicita ao
 *   				usuario os dados para o calculo da area de figuras geometricas
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	13/08/2017
 * @date 	13/08/2017
 * @sa 		area.h
 */

#ifndef CALCAREA_H
#define CALCAREA_H

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do triangulo
 * @param lado Medida do lado do triangulo
 */
void dadosAreaTriangulo(float lado);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do retangulo
 * @param base Medida da base do retangulo
 * @param altura Medida da altura do retangulo 
 */
void dadosAreaRetangulo(float base, float altura);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do quadrado
 * @param lado Medida do lado do quadrado
 */
void dadosAreaQuadrado(float lado);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do circulo
 * @param raio Medida do raio do circulo
 */
void dadosAreaCirculo(float raio);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do piramide
 * @param area_b Medida da area da base da piramide
 * @param area_f Medida da area da face da piramide
 */
void dadosAreaPiramide(float area_b, float area_f);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do cubo
 * @param aresta Medida da aresta do cubo
 */
void dadosAreaCubo(float aresta);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do paralepipedo
 * @param aresta1 Medida da primeira aresta do paralepipedo
 * @param aresta2 Medida da segunda aresta do paralepipedo
 * @param aresta3 Medida da terceira aresta do paralepipedo
 */
void dadosAreaParalelepipedo(float aresta1, float aresta2, float aresta3);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do circulo
 * @param raio Medida do raio da esfera
 */
void dadosAreaEsfera(float raio);

#endif