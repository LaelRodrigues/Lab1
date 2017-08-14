/** 
 * @file	calcperimetro.cpp
 * @brief	Arquivo corpo com a implementacao das funcoes que solicita 
 *   				ao usuario os dados para o calculo do perimetro de figuras planas
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	13/08/2017
 * @date 	13/08/2017
 * @sa 		calcperimetro.h
 */

#include "calcperimetro.h"
#include "perimetro.h"


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do perimetro do triangulo
 * @param lado Medida do lado do triangulo 
 */
void dadosPeriTriangulo(float lado){

	cout << "------Calculo do perimetro------" << endl;
	cout << "Digite o valor do lado: ";
	cin >> lado;
	if(lado <= 0) {
		cout << "A medida do lado do triangulo eh invalida!" << endl;
		return;
	}
	cout << "O valor do perimetro do triangulo eh = " << periTriangulo(lado) << endl;
	cout << endl;
}

/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do perimetro do retangulo
 * @param base Medida da base do retangulo
 * @param altura Medida da altura do retangulo 
 */
void dadosPeriRetangulo(float base, float altura){

	cout << "------Calculo do perimetro------" << endl;
	cout << "Digite o valor da base: ";
	cin >> base;
	if(base <= 0) {
		cout << "A medida da base do retangulo eh invalida!" << endl;
		return;
	}
	cout << "Digite o valor da altura: ";
	cin >> altura;
	if(altura <= 0) {
		cout << "A medida da altura do retangulo eh invalida!" << endl;
		return;
	}
	cout << "O valor do perimetro do retangulo eh = " << periRetangulo(base, altura) << endl;
	cout << endl;

}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do perimetro do quadrado
 * @param lado Medida do lado do quadrado
 */
void dadosPeriQuadrado(float lado){

	cout << "------Calculo do perimetro------" << endl;
	cout << "Digite o valor do lado: ";
	cin >> lado;
	if(lado <= 0) {
		cout << "A medida do lado do quadrado eh invalida!" << endl;
		return;
	}
	cout << "O valor do perimetro do quadrado eh = " << periQuadrado(lado) << endl;
	cout << endl;
}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do perimetro do circulo
 * @param raio Medida do raio do circulo
 */
void dadosPeriCirculo(float raio){

	cout << "------Calculo do perimetro------" << endl;
	cout << "Digite o valor do raio: ";
	cin >> raio;
	if(raio <= 0) {
		cout << "A medida do raio do circulo eh invalida!" << endl;
		return;
	}
	cout << "O valor do perimetro do circulo eh = " << periCirculo(raio) << endl;
	cout << endl;

}
