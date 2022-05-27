#include <stdio.h>
#include <stdlib.h>
/*Descricao da questao

Crie uma funcao que receba como parametros dois vetores de inteiros, v1 e v2, e as suas respectivas quantidades
de elementos, n1 e n2. A funcao devera retornar um ponteiro para um terceiro vetor, v3, com capacidade para (n1 + n2)
elementos, alocado dinamicamente, contendo a uniao de v1 e v2. Por exemplo, se v1 = {11, 13, 45, 7} e v2 = {24, 4, 16, 81,
10, 12}, v3 ira conter {11, 13, 45, 7, 24, 4, 16, 81, 10, 12}.
O cabecalho dessa funcao devera ser o seguinte:
int* uniao(int *v1, int n1, int *v2, int n2);

Em seguida, crie a funcao principal do programa para chamar a funcao uniao passando dois vetores informados pelo usuario
(ou declarados estaticamente). Em seguida, o programa deve exibir na tela os elementos do vetor resultante. Nao esqueca de
 liberar a memoria alocada dinamicamente*/

int* uniao(int *v1, int n1, int *v2, int n2){
	int n3 = n1 + n2;
	int i;
	int *v3 = (int *) malloc(n3 * sizeof(int));

	for(i=0; i<n1; i++){
		*(v3+i) = *(v1+i);
	}
	for(i=n1; i < (n3); i++){
		*(v3+i) = *(v2+(i - n1));
	}
    return v3;		
}

int main(){

	int *v3, n1 = 4, n2 = 6;	

	int v1[4] = {11, 13, 45, 7}; 
    int v2[6] = {24, 4, 16, 81, 10, 12}; 

	v3 = uniao(v1, n1, v2, n2); 

	printf("Vetor:");
	for(int i=0; i<10; i++){
		printf(" [%d] ", *(v3+i));
	}
	printf("\n");
	free(v3);
} 
