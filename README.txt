Aluno : Cristhian Mafalda
N�USP: 9312877
EESC-USP
GitHub username: cristhianmafalda

Trabalho 1 - LPA

1-)Informa��es Gerais dos Programas

1-1) Ambiente e Compilador
Linguagem utilizada: C
Ambiente de desenvolvimento: DevC++
Compilador: TDM-GCC MinGW 4.9.2 Release (padr�o do DevC++) 
Par�metros de Compila��o: padr�o do ambiente
Bibliotecas utilizadas: 	stdio.h	(Todos) 
stdlib.h	(Todos)
math.h	(Apenas Convex-Hull)

1-2)GitHub
No reposit�rio do GitHub, encontram-se :os c�digos fonte (.c) de todos os programas,os arquivos execut�veis (.exe), o README.txt,as bibliotecas utilizadas em arquivos header(.h) e uma s�rie de entradas-exemplo. 
Entradas do formato entrada-geral-n.txt podem ser aplicadas nos programas Closest-Pair, Element-Uniqueness e Frequency-Distribution. As entradas exemplo do formato entrada-ch-n.txt s�o para o programa Convex-Hull.

1-3)Compila��o
Utilizando DEVC++, o programa deve ser compilado de maneira usual, pelas ferramentas padr�o do software. Dentro do software, abrir o (programa).c, a ferramenta de compila��o se encontra no menu Executar>Compilar.
Depois de compilado, o programa deve ser executado no menu Executar>Executar. Softwares como CodeBlocks, entre outros apresentam fun��es semelhantes como Build, por exemplo e podem ser usados.
Todas a compila��es descritas usam GCC MinGW para Windows.
Todos os programas possuem um getch() no final da execu��o para segurar a tela e possibilitar a visualiza��o dos valores de sa�da.


2-)Closest-Pair

2-1)Fun��o
Closest-Pair � um programa em C com a fun��o de determinar os pares mais pr�ximos entre si em um vetor a ser lido. Dado um vetor de tamanho (n), Closest-Pair determina os valores mais pr�ximos entre si e imprime os mesmos. O algoritmo usado ordena os valores e compara os vizinhos, buscando a menor diferen�a entre eles.

2-2)Entrada:
A entrada do programa deve ser constitu�da de um conjunto de n�meros inteiros. O primeiro valor ser� o tamanho(n) do vetor, que deve ser obrigatoriamente maior ou igual a dois. A seguir, deve-se inserir mais (n) valores inteiros quaisquer. 
ATEN��O: valores incoerentes de (n) originar�o um aviso do programa para reinici�-lo com valores corretos.
ATEN��O: caso sejam inseridos mais valores que (n), o programa n�o considera os valores de posi��o [n] em diante.

2-3)Sa�da:
A sa�da padr�o do programa constitui-se dos pares de valores do vetor nos quais foi encontrada a menor diferen�a.
Tamb�m h� uma mensagem informando o valor dessa diferen�a.


3-)Element-Uniqueness

3-1)Fun��o
Element-Uniqueness � um programa que dado um vetor de tamanho (n), ele ir� ler em encontrar� os valores do vetor que aparecem uma �nica vez no mesmo, imprimindo eles na tela. O algoritmo ordena os valores e compara os vizinhos, os valores que forem diferentes de seus vizinhos ser�o os elementos �nicos.

3-2)Entrada:
A entrada do programa deve ser constitu�da de um conjunto de n�meros inteiros. O primeiro valor ser� o tamanho(n) do vetor, que deve ser obrigatoriamente maior ou igual a um. A seguir, deve-se inserir mais (n) valores inteiros quaisquer. 
ATEN��O: valores incoerentes de (n) originar�o um aviso do programa para reinici�-lo com valores corretos.
ATEN��O: caso sejam inseridos mais valores que (n), o programa n�o considera os valores de posi��o [n] em diante.

3-3)Sa�da:
A sa�da padr�o do programa constitui-se dos valores �nicos encontrados no vetor. Uma mensagem avisar� caso n�o exista nenhum.


4-)Frequency-Distribution

4-1)Fun��o
Frequency-Distribution � um programa que dado um vetor de tamanho (n), ele ir� ler em encontrar� os valores do vetor que aparecem mais vezes no mesmo, imprimindo a quantidade de vezes e os valores que mais apareceram. O algoritmo ordena os valores do vetor, e usa uma an�lise de vizinhos para determinar qual a maior frequ�ncia, depois, busca os valores com essa frequ�ncia e imprime na tela.

4-2)Entrada:
A entrada do programa deve ser constitu�da de um conjunto de n�meros inteiros. O primeiro valor ser� o tamanho(n) do vetor, que deve ser obrigatoriamente maior ou igual a um. A seguir, deve-se inserir mais (n) valores inteiros quaisquer. 
ATEN��O: valores incoerentes de (n) originar�o um aviso do programa para reinici�-lo com valores corretos.
ATEN��O: caso sejam inseridos mais valores que (n),o programa n�o considera os valores de posi��o [n] em diante.

4-3)Sa�da:
A sa�da padr�o do programa constitui-se da quantidade de vezes que o valor mais frequente foi encontrado junto com o valor dele. 


5-)Convex-Hull

5-1)Fun��o
Convex-Hull � um programa que dado um conjunto de (n) pontos, ele ir� ler esses pontos e identificar o fecho convexo de menor �rea, imprimindo os v�rtices do mesmo. O algoritmo cria um sistema de ordena��o para esses pontos com base nas coordenadas, de modo que pegando um v�rtice, � poss�vel achar os demais pelo cosseno do �ngulo formado entre o vetor entre os v�rtices e uma reta vertical.

5-2)Entrada:
A entrada do programa deve ser constitu�da de um conjunto de n�meros inteiros. O primeiro valor ser� o tamanho(n) do vetor, que deve ser obrigatoriamente maior que um. A seguir, deve-se inserir mais (n) pontos no formato x y, ou seja a coordenada x, um espa�o, coordenada y. 
ATEN��O: valores incoerentes de (n) originar�o um aviso do programa para reinici�-lo com valores corretos.
ATEN��O: caso sejam inseridos mais valores que (n),o programa n�o considera os valores de posi��o [n] em diante.
ATEN��O: n�o inserir pontos iguais, o programa deve funcionar com a maioria dos casos, por�m ele pode apresentar erros l�gicos em alguns casos, por isso, evite.

5-3)Sa�da:
A sa�da padr�o do programa constitui-se das coordenadas dos pontos que s�o v�rtices do fecho convexo encontrado no programa.