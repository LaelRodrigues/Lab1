/** 
 * @file	calcarea.cpp
 * @brief	Arquivo corpo com a implementacao das funcoes que solicita ao
 *   				usuario os dados para o calculo da area de figuras geometricas 
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	13/08/2017
 * @date 	13/08/2017
 * @sa 		calcarea.h
 */

#include "calcarea.h"
#include "area.h"

/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do triangulo
 * @param lado Medida do lado do triangulo
 */
void dadosAreaTriangulo(float lado){

	cout << "------Calculo da area------"<< endl;
	cout << "Digite o valor do lado: ";
	cin >> lado;
	if(lado <= 0){
		cout << "A Medida do lado do triangulo eh invalida!" << endl;
		return;
	} 
	float altura = (lado/2) * sqrt(3);
	cout << "O valor da area do triangulo eh = " << areaTriangulo(lado, altura) << endl;
	cout << endl;
}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 * 				para o calculo da area do retangulo
 * @param base Medida da base do retangulo
 * @param altura Medida da altura do retangulo 
 */
void dadosAreaRetangulo(float base, float altura){

	cout << "------Calculo da area------"<< endl;
	cout << "Digite o valor da base: ";
	cin >> base;
	if(base <= 0) {
		cout << "A Medida da base do retangulo eh invalida!" << endl;
		return;
	}
	cout << "Digite o valor da altura: ";
	cin >> altura;
	if(altura <= 0) {
		cout << "A Medida da altura do retangulo eh invalida!" << endl;
		return;
	}
	cout << "O valor da area do retangulo eh = " << areaRetangulo(base, altura) << endl;
	cout << endl;


}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do quadrado
 * @param lado Medida do lado do quadrado
 */
void dadosAreaQuadrado(float lado){

	cout << "------Calculo da area------"<< endl;
	cout << "Digite o valor do lado: ";
	cin >> lado;
	if(lado <= 0) {
		cout << "A Medida do lado do quadrado eh invalida!" << endl;
		return;
	}
	cout << "O valor da area do quadrado eh = " << areaQuadrado(lado) << endl;
	cout << endl;
}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do circulo
 * @param raio Medida do raio do circulo
 */
void dadosAreaCirculo(float raio){

	cout << "------Calculo da area------"<< endl;
	cout << "Digite o valor do raio: ";
	cin >> raio;
	if(raio <= 0) {
		cout << "A Medida do raio do circulo eh invalida!" << endl;
		return;
	}
	cout << "O valor da area do circulo eh = " << areaCirculo(raio) << endl;
	cout << endl;

}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do piramide
 * @param area_b Medida da area da base da piramide
 * @param area_f Medida da area da face da piramide
 */
void dadosAreaPiramide(float area_b, float area_f){

	cout << "------Calculo da area------"<< endl;
	cout << "Digite o valor da area da base: ";
	cin >> area_b;
	if(area_b <= 0) {
		cout << "A Medida da area da base do piramide eh invalida!" << endl;
		return;
	} 
	cout << "Digite o valor da area de uma face da piramide: ";
	cin >> area_f;
	if(area_f <= 0) {
		cout << "A Medida da area da face do piramide eh invalida!" << endl;
		return;
	} 
	area_f *= 4;
	cout << "O valor da area da piramide eh = " << areaPiramide(area_b, area_f) << endl;
	cout << endl;
}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do cubo
 * @param aresta Medida da aresta do cubo
 */
void dadosAreaCubo(float aresta){

	cout << "------Calculo da area------"<< endl;
	cout << "Digite o valor do aresta: ";
	cin >> aresta;
	if(aresta <= 0) {
		cout << "A Medida da aresta do cubo eh invalida!" << endl;
		return;
	}
	cout << "O valor da area do cubo eh = " << areaCubo(aresta) << endl;
	cout << endl;
}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do paralelepipedo
 * @param aresta1 Medida da primeira aresta do paralelepipedo
 * @param aresta2 Medida da segunda aresta do paralelepipedo
 * @param aresta3 Medida da terceira aresta do paralelepipedo
 */
void dadosAreaParalelepipedo(float aresta1, float aresta2, float aresta3){

	cout << "------Calculo da area------"<< endl;
	cout << "Digite o valor da primeira aresta: ";
	cin >> aresta1;
	if(aresta1 <= 0) {
		cout << "A Medida da aresta1 do paralelepipedo eh invalida!" << endl;
		return;
	}
	cout << "Digite o valor da segunda aresta: ";
	cin >> aresta2;
	if(aresta2 <= 0) {
		cout << "A Medida da aresta2 do paralelepipedo eh invalida!" << endl;
		return;
	}
	cout << "Digite o valor da terceira aresta: ";
	cin >> aresta3;
	if(aresta3 <= 0) {
		cout << "A Medida da aresta3 do paralelepipedo eh invalida!" << endl;
		return;
	}
	cout << "O valor da area do paralepipedo eh: " << areaParalelepipedo(aresta1, aresta2, aresta3) << endl;
	cout << endl;
}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo da area do circulo
 * @param raio Medida do raio da esfera
 */
void dadosAreaEsfera(float raio) {

	cout << "------Calculo da area------"<< endl;
	cout << "Digite o valor do raio: ";
	cin >> raio;
	if(raio <= 0) {
		cout << "A Medida do raio da esfera eh invalida!" << endl;
		return;
	}
	cout << "O valor da area da esfera eh: " << areaEsfera(raio) << endl;
	cout << endl;
}