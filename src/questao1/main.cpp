/** 
 * @file	main.cpp
 * @brief   arquivo corpo de teste das funcoes para calcular 
 * 					a area, o perimetro e o volume de figura geometricas
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	12/03/2017
 * @date	12/03/2017
 * @sa 		calcarea.h
 * @sa		calcperimetro.h
 * @sa		calcvolume.h
*/

#include "calcarea.h"
#include "calcperimetro.h"
#include "calcvolume.h"
#include "area.h"
#include "perimetro.h"
#include "volume.h"


/**
 * @brief	funcao principal
 */

int main(){

	int escolha;

	float lado = 0;
	float base = 0;
	float altura = 0;
	float raio = 0;
	float aresta_base = 0;
	float area_face = 0;
	float aresta = 0;
	float aresta1 = 0;
	float aresta2 = 0;
	float aresta3 = 0;

	do{	
		cout << "------------------------------------------" << endl;
		cout << "Calculadora de geometria plana e espacial" << endl;
		cout << "------------------------------------------" << endl;
		cout << "(1) para triangulo equilatero" << endl;
		cout << "(2) para retangulo" << endl;
		cout << "(3) para quadrado" << endl;
		cout << "(4) para circulo" << endl;
		cout << "(5) para piramide com base quadrangular" << endl;
		cout << "(6) para cubo" << endl;
		cout << "(7) para paralelepipedo" << endl;
		cout << "(8) para esfera" << endl;
		cout << "(0) para sair" << endl;
		cout << "Digite sua escolha: ";


		cin >> escolha;
		switch(escolha){

			case 1:
				dadosAreaTriangulo(lado);
				dadosPeriTriangulo(lado);
				break;

			case 2:
				dadosAreaRetangulo(base, altura);
				dadosPeriRetangulo(base, altura);
				break;

			case 3:
				dadosAreaQuadrado(lado);
				dadosPeriQuadrado(lado);
				break;

			case 4:
				dadosAreaCirculo(raio);
				dadosPeriCirculo(raio);
				break;

			case 5:
				dadosAreaPiramide(aresta_base, area_face);
				dadosVolPiramide(aresta_base, altura);
				break;

			case 6:
				dadosAreaCubo(aresta);
				dadosVolCubo(aresta);
				break;

			case 7:
				dadosAreaParalelepipedo(aresta1, aresta2, aresta3);
				dadosVolParalelepipedo(aresta2, aresta2, aresta3);
				break;

			case 8:
				dadosAreaEsfera(raio);
				dadosVolEsfera(raio);
				break;

			case 0:
				return 0;

			default:
				cout << "Valor invalido!!" << endl;
			break;
		}
	} while(escolha != 0);

}