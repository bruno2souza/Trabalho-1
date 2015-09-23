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
	
	int n;										// ler quantidade n de elementos
	printf ("Entre com o valor de elementos a ser digitado: ");
	scanf ("%d",&n);
	
	if(n<1){									//teste para valor abaixo de 2
		printf("\nErro! Reinicie o programa e insira um valor maior que 0.\n");
	}
	
	if (n>0){									//condicao para necessitar do algoritmo
	
		int *v;									// alocando memória para n elementos
		v = (int*)malloc(n*sizeof(int));
		
		printf("\nEntre com os valores inteiros do seu vetor:\n\n");
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
			
		int cont=1, contmax=1;					//vamos localizar a frequencia maxima presente no vetor
		
		if(n>1){
			for(i=1;i<n;i++){
				if(v[i-1]!=v[i]){					//recomeça o contador sempre que o valor seguinte for diferente do anterior
					cont=1;
				}
				else if(v[i]==v[i-1]){				//verifica se o contador para o valor atual é maior que o do anterior
					cont++;
					if(cont>contmax){
					contmax=cont;
					}
				}
			}
		}
		
		printf("\n\nFrequencia maxima: %d\n",contmax);	//teste
	}
}
