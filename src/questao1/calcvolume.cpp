/** 
 * @file	calcvolume.cpp
 * @brief	Arquivo corpo com a implementacao das funcoes que solicita 
 *   				ao usuario os dados para o calculo do volume de figuras espaciais
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	13/08/2017
 * @date 	13/08/2017
 * @sa 		calcvolume.h
 */

#include "calcvolume.h"
#include "volume.h"


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do volume da piramide
 * @param area_b Medida da area da base da piramide
 * @param altura Medida da altura da piramide
 */
void dadosVolPiramide(float area_b, float altura){
	
	cout << "------Calculo do volume------" << endl;
	cout << "Digite o Valor da area da base: ";
	cin >> area_b;
	if(area_b <= 0) {
		cout << "A medida da area da base da piramide eh invalida!" << endl;
		return;
	} 
	cout << "Digite o valor da altura: ";
	cin >> altura;
	if(altura <= 0) {
		cout << "A medida da altura da piramide eh invalida!" << endl;
		return;
	}
	cout << "O valor do volume da piramide eh = " <<  volPiramide(area_b, altura) << endl;
	cout << endl;
}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do volume do cubo
 * @param aresta Medida da aresta do cubo 
 */
void dadosVolCubo(float aresta){
	
	cout << "------Calculo do volume------" << endl;
	cout << "Digite o valor da aresta: ";
	cin >> aresta;
	if(aresta <= 0) {
		cout << "A medida da aresta do cubo eh invalida!" << endl;
		return;
	}
	cout << "O valor do volume do cubo eh = " << volCubo(aresta) << endl;
	cout << endl;
}


/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do volume do paralelepipedo
 * @param aresta1 Medida da primeira aresta do paralelepipedo
 * @param aresta2 Medida da segunda aresta do paralelepipedo
 * @param aresta3 Medida da terceira aresta do paralelepipedo
 */

void dadosVolParalelepipedo(float aresta1, float aresta2, float aresta3){

	cout << "------Calculo do volume------" << endl;
	cout << "Digite o valor da primeira aresta: ";
	cin >> aresta1;
	if(aresta1 <= 0) {
		cout << "A medida da aresta1 do paralelepipedo eh invalida!" << endl;
		return;
	}
	cout << "Digite o valor da segunda aresta: ";
	cin >> aresta2;
	if(aresta2 <= 0) {
		cout << "A medida da aresta2 do paralelepipedo eh invalida!" << endl;
		return;
	}
	cout << "Digite o valor da terceira aresta: ";
	cin >> aresta3;
	if(aresta3 <= 0) {
		cout << "A medida da aresta3 do paralelepipedo eh invalida!" << endl;
		return;
	}
	cout << "O valor do volume do paralelepipedo eh = " << volParalelepipedo(aresta1, aresta2, aresta3) << endl;
	cout << endl;
}

/**
 * @brief Funcao que solicita ao usuario os dados necessarios
 *  			para o calculo do volume do esfera
 * @param raio Medida do raio da esfera 
 */
void dadosVolEsfera(float raio){

	cout << "------Calculo do volume------" << endl;
	cout << "Digite o valor do raio: ";
	cin >> raio;
	if(raio <= 0) {
		cout << "A medida do raio do esfera eh invalida!" << endl;
		return;
	}
	cout << "O valor do volume da esfera eh = " << volEsfera(raio) << endl;
	cout << endl;
}