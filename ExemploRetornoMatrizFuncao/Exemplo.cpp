#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define LINHAS_MATRIZ 5
#define COLUNAS_MATRIZ 4


/// <summary>
/// ALOCACAO DINAMICA DE PONTEIRO PARA MATRIZ BIDIMENSIONAL 5x4
/// </summary>
/// <returns>PONTEIRO DE MATRIZ BIDIMENSIONAL 5x4</returns>
int** retonaPonteiroDeMatriz5x4() {

	int** matriz = (int**)malloc(LINHAS_MATRIZ * sizeof(int*));

	for (int i = 0; i < LINHAS_MATRIZ; ++i)
		matriz[i] = (int*)malloc(COLUNAS_MATRIZ * sizeof(int));


	for (size_t i = 0; i < LINHAS_MATRIZ; i++)
	{
		for (size_t a = 0; a < COLUNAS_MATRIZ; a++)
		{
			matriz[i][a] = i + a;
		}
	}

	return matriz;
}



int main()
{
	int** matriz = NULL;

	matriz = retonaPonteiroDeMatriz5x4();

	for (size_t i = 0; i < LINHAS_MATRIZ; i++)
	{
		std::cout <<"\n";

		for (size_t a = 0; a < COLUNAS_MATRIZ; a++)
		{
			std::cout << matriz[i][a];
		}
	}

	std::cout << "\n\n";
}
