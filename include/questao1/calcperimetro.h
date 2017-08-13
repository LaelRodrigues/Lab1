/** 
 * @file	calcperimetro.h
 * @brief	Arquivo cabecalho com os prototipos das funcoes que solicita 
 *   				ao usuario os dados para o calculo do perimetro de figuras planas
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	13/08/2017
 * @date 	13/08/2017
 * @sa 		perimetro.h
 */

#ifndef CALCPERIMETRO_H
#define CALCPERIMETRO_H


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do perimetro do triangulo
 * @param lado Medida do lado do triangulo 
 */
void dadosPeriTriangulo(float lado);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do perimetro do retangulo
 * @param base Medida da base do retangulo
 * @param altura Medida da altura do retangulo 
 */
void dadosPeriRetangulo(float base, float altura);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do perimetro do quadrado
 * @param lado Medida do lado do quadrado
 */
void dadosPeriQuadrado(float lado);


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do perimetro do circulo
 * @param raio Medida do raio do circulo
 */
void dadosPeriCirculo(float raio);

#endif