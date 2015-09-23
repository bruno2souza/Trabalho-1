#include<stdio.h>
#include<stdlib.h>

void main () {
	
	int n;										// ler quantidade n de elementos
	printf ("Entre com o valor de elementos a ser digitado em seguida, os valores do vetor.\n\n");
	scanf ("%d",&n);
	
	if(n<2){									//teste para valor abaixo de 2
		printf("\nErro! Reinicie o programa e insira um valor maior que 1.\n");
	}
}
