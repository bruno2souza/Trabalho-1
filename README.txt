Aluno : Cristhian Mafalda
NºUSP: 9312877
EESC-USP
GitHub username: cristhianmafalda

Trabalho 1 - LPA

1-)Informações Gerais dos Programas

1-1) Ambiente e Compilador
Linguagem utilizada: C
Ambiente de desenvolvimento: DevC++
Compilador: TDM-GCC MinGW 4.9.2 Release (padrão do DevC++) 
Parâmetros de Compilação: padrão do ambiente
Bibliotecas utilizadas: 	stdio.h	(Todos) 
stdlib.h	(Todos)
math.h	(Apenas Convex-Hull)

1-2)GitHub
No repositório do GitHub, encontram-se :os códigos fonte (.c) de todos os programas,os arquivos executáveis (.exe), o README.txt,as bibliotecas utilizadas em arquivos header(.h) e uma série de entradas-exemplo. 
Entradas do formato entrada-geral-n.txt podem ser aplicadas nos programas Closest-Pair, Element-Uniqueness e Frequency-Distribution. As entradas exemplo do formato entrada-ch-n.txt são para o programa Convex-Hull.

1-3)Compilação
Utilizando DEVC++, o programa deve ser compilado de maneira usual, pelas ferramentas padrão do software. Dentro do software, abrir o (programa).c, a ferramenta de compilação se encontra no menu Executar>Compilar.
Depois de compilado, o programa deve ser executado no menu Executar>Executar. Softwares como CodeBlocks, entre outros apresentam funções semelhantes como Build, por exemplo e podem ser usados.
Todas a compilações descritas usam GCC MinGW para Windows.
Todos os programas possuem um getch() no final da execução para segurar a tela e possibilitar a visualização dos valores de saída.


2-)Closest-Pair

2-1)Função
Closest-Pair é um programa em C com a função de determinar os pares mais próximos entre si em um vetor a ser lido. Dado um vetor de tamanho (n), Closest-Pair determina os valores mais próximos entre si e imprime os mesmos. O algoritmo usado ordena os valores e compara os vizinhos, buscando a menor diferença entre eles.

2-2)Entrada:
A entrada do programa deve ser constituída de um conjunto de números inteiros. O primeiro valor será o tamanho(n) do vetor, que deve ser obrigatoriamente maior ou igual a dois. A seguir, deve-se inserir mais (n) valores inteiros quaisquer. 
ATENÇÃO: valores incoerentes de (n) originarão um aviso do programa para reiniciá-lo com valores corretos.
ATENÇÃO: caso sejam inseridos mais valores que (n), o programa não considera os valores de posição [n] em diante.

2-3)Saída:
A saída padrão do programa constitui-se dos pares de valores do vetor nos quais foi encontrada a menor diferença.
Também há uma mensagem informando o valor dessa diferença.


3-)Element-Uniqueness

3-1)Função
Element-Uniqueness é um programa que dado um vetor de tamanho (n), ele irá ler em encontrará os valores do vetor que aparecem uma única vez no mesmo, imprimindo eles na tela. O algoritmo ordena os valores e compara os vizinhos, os valores que forem diferentes de seus vizinhos serão os elementos únicos.

3-2)Entrada:
A entrada do programa deve ser constituída de um conjunto de números inteiros. O primeiro valor será o tamanho(n) do vetor, que deve ser obrigatoriamente maior ou igual a um. A seguir, deve-se inserir mais (n) valores inteiros quaisquer. 
ATENÇÃO: valores incoerentes de (n) originarão um aviso do programa para reiniciá-lo com valores corretos.
ATENÇÃO: caso sejam inseridos mais valores que (n), o programa não considera os valores de posição [n] em diante.

3-3)Saída:
A saída padrão do programa constitui-se dos valores únicos encontrados no vetor. Uma mensagem avisará caso não exista nenhum.


4-)Frequency-Distribution

4-1)Função
Frequency-Distribution é um programa que dado um vetor de tamanho (n), ele irá ler em encontrará os valores do vetor que aparecem mais vezes no mesmo, imprimindo a quantidade de vezes e os valores que mais apareceram. O algoritmo ordena os valores do vetor, e usa uma análise de vizinhos para determinar qual a maior frequência, depois, busca os valores com essa frequência e imprime na tela.

4-2)Entrada:
A entrada do programa deve ser constituída de um conjunto de números inteiros. O primeiro valor será o tamanho(n) do vetor, que deve ser obrigatoriamente maior ou igual a um. A seguir, deve-se inserir mais (n) valores inteiros quaisquer. 
ATENÇÃO: valores incoerentes de (n) originarão um aviso do programa para reiniciá-lo com valores corretos.
ATENÇÃO: caso sejam inseridos mais valores que (n),o programa não considera os valores de posição [n] em diante.

4-3)Saída:
A saída padrão do programa constitui-se da quantidade de vezes que o valor mais frequente foi encontrado junto com o valor dele. 


5-)Convex-Hull

5-1)Função
Convex-Hull é um programa que dado um conjunto de (n) pontos, ele irá ler esses pontos e identificar o fecho convexo de menor área, imprimindo os vértices do mesmo. O algoritmo cria um sistema de ordenação para esses pontos com base nas coordenadas, de modo que pegando um vértice, é possível achar os demais pelo cosseno do ângulo formado entre o vetor entre os vértices e uma reta vertical.

5-2)Entrada:
A entrada do programa deve ser constituída de um conjunto de números inteiros. O primeiro valor será o tamanho(n) do vetor, que deve ser obrigatoriamente maior que um. A seguir, deve-se inserir mais (n) pontos no formato x y, ou seja a coordenada x, um espaço, coordenada y. 
ATENÇÃO: valores incoerentes de (n) originarão um aviso do programa para reiniciá-lo com valores corretos.
ATENÇÃO: caso sejam inseridos mais valores que (n),o programa não considera os valores de posição [n] em diante.
ATENÇÃO: não inserir pontos iguais, o programa deve funcionar com a maioria dos casos, porém ele pode apresentar erros lógicos em alguns casos, por isso, evite.

5-3)Saída:
A saída padrão do programa constitui-se das coordenadas dos pontos que são vértices do fecho convexo encontrado no programa.