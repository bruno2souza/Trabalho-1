#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void troca(int v[], int p1, int p2){     	//funcao que troca os valores entre duas posicoes de um vetor
	int t = v[p1];
	v[p1] = v[p2];
	v[p2] = t;
}

void quicksort2(int x[],int y[], int f, int l){ 		//funcao que ordena um vetor atraves do método do quicksort
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

float cosseno(int x[],int y[],int i,int j){		//funcao que calcula o cosseno entre dois vetores
	float modulo, cosseno;						//sabendo que deltaX=x[j]-x[i] e deltaY=y[j]-y[i]	
	if((y[j]-y[i])!=0){							//modulo do vetor é igual a raiz quadrada das somas dos quadrados de delta X e deltaY
		modulo = sqrt((x[j]-x[i])*(x[j]-x[i])+(y[j]-y[i])*(y[j]-y[i]));
		cosseno = (y[j]-y[i])/modulo;			//cosseno entre o vetor(0,1) e (deltaX,deltaY) = [(0,1).(deltaX,deltaY)]/[módulo de (0,1).módulo de (deltaX,deltaY)]
	}
	else if((y[j]-y[i])==0){
		cosseno = 0;
	}
	return cosseno;
}

void main () {
	
	int n;										// ler quantidade n de elementos
	printf ("Entre com o valor de pontos a ser digitado em seguida, os pontos do seu vetor.\n\n");
	scanf ("%d",&n);
	
	if(n<2){									//teste para valor abaixo de 2
		printf("\nErro! Reinicie o programa e insira um valor maior que 1.\n");
	}
	
	if (n>1){									//condicao para necessitar do algoritmo
	
		int *x,*y,*ch;							// alocando memória para as 3 variaveis de um elemento
		x = (int*)malloc(n*sizeof(int));		// x é a coordenada horizontal		
		y = (int*)malloc(n*sizeof(int));		// y é a coordenada vertical
		ch = (int*)calloc(n,sizeof(int));		//ch é o vetor que armazena se o ponto pertence ou não ao fecho convexo, valor inicial para todos=0
		
		int i;									//lendo os n elementos
		for(i=0;i<n;i++){
			scanf("%d",&x[i]);
			scanf("%d",&y[i]);
		}
			
		quicksort2(x,y,0,n-1);					//ordenando o vetor em x com quick sort
		
		int j=0;								//ordenar y quando x for igual
		for(i=0;i<n-1;i++){
			if(x[i]==x[i+1]){ 					//localiza blocos onde varios elemntos possuem o mesmo valor de x
				j++;
				if(i+1==n-1){
					quicksort(y,i-j+1,i+1);		
					j=0;
				}
			}
			if(x[i]!=x[i+1]){
				quicksort(y,i-j,i);				//ordena os valores de y dentro do bloco de valores iguais para x
				j=0;
			}
		}
				
		int poscos;						//pegando o ponto inicial, usaremos o maior angulo para localizar o proximo ponto
		float cosm;						//quando um angulo está no intervalo [0,180], quanto maior ele for, menor sera seu cosseno
										//poscos = posicão do cosseno buscado, cosm=valor do cosseno buscado
		i=0;
		while(i<n-1){
			cosm=1.0;
			poscos=i;
			for(j=i+1;j<n;j++){
				if(cosseno(x,y,i,j)<=cosm){		//nesse caso buscamos o menor cosseno
					cosm=cosseno(x,y,i,j);
					poscos=j;
				}				
			}
			ch[poscos]=1;				//quando um ponto pertence ao fecho, seu ch é mudado de zero para um
			i=poscos;
			
		}								//a primeira parte gera a parte inferior do fecho entre o primeiro e o ultimo ponto
		
		i=n-1;
		while(i>0){
			cosm=-1.0;					//partindo agora do ultimo, buscamos fechar a parte superior
			poscos=i;
			for(j=i-1;j>=0;j--){
				if(cosseno(x,y,i,j)>=cosm){		//como mantemos o vetor comparacao para cima, mas estamos voltando, buscamos o menor angulo, ou seja, o maior cosseno
					cosm=cosseno(x,y,i,j);
					poscos=j;
				}				
			}
			ch[poscos]=1;				//pontos do fecho recebem ch=1
			i=poscos;
			
		}
		
		int k;							//essa parte remove alguns pontos colineares que não foram removidos na parte superior
		for(i=0;i<n;i++){
			if(ch[i]==1){				//pega apenas pontos do fecho
				for(j=0;j<n;j++){
					if(j!=i && ch[j]==1){
						for(k=0;k<n;k++){
							if(ch[k]==1 && k!=i && k!=j && cosseno(x,y,i,j)==-cosseno(x,y,i,k)){ 		//analisa se existem dois cossenos opostos,o que pode significar colinearidade
								if(y[j]>=y[i] && y[k]<=y[i] && x[j]>=x[i] && x[k]<=x[i]){				//analisando por quadrantes, podemos definir se esses angulos são ou não de colineares
									ch[i]=0;
								}
								if(y[j]>=y[i] && y[k]<=y[i] && x[j]<=x[i] && x[k]>=x[i]){
									ch[i]=0;
								}
								if(y[j]<=y[i] && y[k]>=y[i] && x[j]>=x[i] && x[k]<=x[i]){
									ch[i]=0;
								}
								if(y[j]<=y[i] && y[k]>=y[i] && x[j]<=x[i] && x[k]>=x[i]){
									ch[i]=0;
								}
							}
						}
					}
				}
			}
		}
		
		
		printf("\nVertices do fecho convexo:\n\n");
		for(i=0;i<n;i++){						//imprime os pontos do fecho convexo, ou seja, pontos com ch=1
			if(ch[i]==1){
				printf("%d %d\n",x[i],y[i]);
			}
		}
		
		
		free(x);
		free(y);	
		free(ch);							//liberando a memória utilizada
	}
	getch();
}
