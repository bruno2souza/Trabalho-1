#include<stdio.h>
#include<stdlib.h>

void troca(int v[], int p1, int p2){     	//funcao que troca os valores entre duas posicoes de um vetor
	int t = v[p1];
	v[p1] = v[p2];
	v[p2] = t;
}

void quicksort(int v[], int f, int l){ 		//funcao que ordena um vetor atraves do método do quicksort
	if (f>=l){
		return;								//condicao para fim de recursao
	}
	int p = rand() % (l-f+1) + f;			//acha uma posicao aleatoria p dentro do vetor para iniciar a ordenacao
	troca(v,p,f);
	p=f;
	int i=f,j=l;
	while(i<j){
		while(v[i]<=v[p] && i<=j){   		//localiza um valor maior que o p
			i++;
		}
		while(v[j]>v[p]){					//localiza um valor menor que o p
			j--;
		}	
		if(j>i){							// verifica a necessidade de troca
				troca(v,i,j);
		}
		
	}	
	troca(v,j,p);	
	quicksort(v,f,j-1);    					//funcao recursiva para ordenar posicoes anteriores a p
	quicksort(v,j+1,l);						//funcao recursiva para ordenar posicoes posteriores a p
}

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
		
		quicksort(v,0,n-1);						//ordenando o vetor com quick sort
		
		printf ("\n\nOrdenado:\n");				// teste para ver se ordenou
		for (i=0;i<n;i++){
			printf ("\n%d",v[i]);
		}
		
	}
}
