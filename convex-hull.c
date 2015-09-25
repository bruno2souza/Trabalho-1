#include<stdio.h>
#include<stdlib.h>

void troca(int v[], int p1, int p2){     	//funcao que troca os valores entre duas posicoes de um vetor
	int t = v[p1];
	v[p1] = v[p2];
	v[p2] = t;
}

void quicksort2(int x[],int y[], int f, int l){ 		//funcao que ordena um vetor atraves do m�todo do quicksort
	if (f>=l){
		return;								//condicao para fim de recursao
	}
	int p = rand() % (l-f+1) + f;			//acha uma posicao aleatoria p dentro do vetor para iniciar a ordenacao
	troca(x,p,f);
	troca(y,p,f);
	p=f;
	int i=f,j=l;
	while(i<j){
		while(x[i]<=x[p] && i<=j){   		//localiza um valor maior que o p
			i++;
		}
		while(x[j]>x[p]){					//localiza um valor menor que o p
			j--;
		}	
		if(j>i){							// verifica a necessidade de troca
				troca(x,i,j);
				troca(y,i,j);
		}
		
	}	
	troca(x,j,p);
	troca(y,j,p);	
	quicksort2(x,y,f,j-1);    					//funcao recursiva para ordenar posicoes anteriores a p
	quicksort2(x,y,j+1,l);						//funcao recursiva para ordenar posicoes posteriores a p
}

void quicksort(int v[], int f, int l){ 		//funcao que ordena um vetor atraves do m�todo do quicksort
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
	
	int n;										// ler quantidade n de elementos
	printf ("Entre com o valor de elementos a ser digitado em seguida, os valores do vetor.\n\n");
	scanf ("%d",&n);
	
	if(n<2){									//teste para valor abaixo de 2
		printf("\nErro! Reinicie o programa e insira um valor maior que 1.\n");
	}
	
	if (n>1){									//condicao para necessitar do algoritmo
	
		int *x,*y;									// alocando mem�ria para n elementos
		x = (int*)malloc(n*sizeof(int));
		y = (int*)malloc(n*sizeof(int));
		
		int i;									//lendo os n elementos
		for(i=0;i<n;i++){
			scanf("%d",&x[i]);
			scanf("%d",&y[i]);
		}
			
		quicksort2(x,y,0,n-1);						//ordenando o vetor com quick sort
		
		printf("\nOrdenado em X:\n\n");
		for(i=0;i<n;i++){						//teste para ver se ordenou o vetor
		printf("%d ",x[i]);
		printf("%d\n",y[i]);
		}
		
		
		int j=0;								//ordenar y quando x for igual
		for(i=0;i<n-1;i++){
			if(x[i]==x[i+1]){ 
				j++;
				if(i+1==n-1){
					quicksort(y,i-j+1,i+1);
					j=0;
				}
			}
			if(x[i]!=x[i+1]){
				quicksort(y,i-j,i);
				j=0;
			}
		}
		
			
		
		printf("\nOrdenado em Y:\n\n");
		for(i=0;i<n;i++){						//teste para ver se ordenou o vetor
		printf("%d ",x[i]);
		printf("%d\n",y[i]);
		}
		
		
		free(x);
		free(y);								//liberando a mem�ria utilizada
	}
}