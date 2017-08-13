/** 
 * @file	perimetro.h
 * @brief	Arquivo cabecalho com os prototipos das funcoes que realizam
 *   				o calculo do perimetro de viguras geometricas planas
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	13/08/2017
 * @date 	13/08/2017
 */

#ifndef PERIMETRO_H
#define PERIMETRO_H

/** brief Valor referentea a constante PI */
#define PI 3.1415

#include <iostream>

using std::cin;
using std::cout;
using std::endl;


/**
 * @brief Funcao que calcula o perimetro de um triangulo
 * @param lado Medida do lado triangulo  
 * @return Perimetro do triangulo
 */
float periTriangulo(float lado);


/**
 * @brief Funcao que calcula o perimetro do retangulo
 * @param base Medida da base do retangulo
 * @param altura Medida da altura do retangulo 
 * @return Perimetro do retangulo
 */
float periRetangulo(float base, float altura);


/**
 * @brief Funcao que calcula o perimetro de um quadrado
 * @param lado Medida do lado do quadrado
 * @return Perimetro do quadrado
 */
float periQuadrado(float lado);


 /**
  * @brief Funcao que calcula o perimetro do circulo
  * @param raio Medida do raio do circulo
  * @return Perimetro do circulo
  */
float periCirculo(float raio);

#endif