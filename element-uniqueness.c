#include<stdio.h>
#include<stdlib.h>

void main () {
	
	int n;									// ler quantidade n de elementos
	printf ("Entre com o valor de elementos a ser digitado em seguida, os valores do vetor.\n\n");
	scanf ("%d",&n);
	
	if(n<1){									//teste para valor abaixo de 2
	printf ("Entre com o valor de elementos a ser digitado em seguida, os valores do vetor.\n\n");
	}
	
	if (n>0){									//condicao para necessitar do algoritmo
	
		int *v;									// alocando memória para n elementos
		v = (int*)malloc(n*sizeof(int));
		
		int i;									//lendo os n elementos
		for(i=0;i<n;i++){
			scanf("%d",&v[i]);
		}
		
		for (i=0;i<n;i++){						// teste para ver se leu
			printf ("\n%d",v[i]);
		}
	}
}
