#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

/*Descricao da questao:*/
/*Considere uma aplicacao grafica que define dois tipos estruturados identificados pelos nomes Ponto e Circulo. O
tipo estruturado Ponto representa o objeto ponto em duas dimensoes, que e composto por duas coordenadas tipo float. O tipo
estruturado Circulo representa o objeto c�rculo composto por um nome (que nunca contem mais do que 10 caracteres, p.ex.
Circulo015), por um ponto que define o seu centro e por um raio com a precisao de um float. A Figura abaixo ilustra estas
estruturas:
           
           --------      ----------
           | Ponto |     | Circulo |
           --------      -----------
           |   Y   |     |   Nome  |
           --------      -----------
           |   X   |     |  Centro |
           --------      -----------
                         |   Raio  |
                         -----------    
           
Escreva um programa completo (com includes, structs, funcoes e a main), em um unico arquivo .c, que implementa e testa as
seguintes funcoes:

    criaCirculo() - que cria um novo circulo. Esta funcao recebe um nome, as coordenadas x e y do centro e o raio para
este novo circulo, e retorna um ponteiro para Circulo.

    contem() - que testa se um determinado circulo contem outro circulo dado. Esta funcao recebe dois ponteiros para o
tipo estruturado Circulo e retorna 0 se o primeiro circulo nao contem o segundo circulo e diferente de zero se contem.

Um circulo c1 contem outro circulo c2 se a distancia entre os seus centros (d) somada ao raio de c2 for menor ou igual ao raio
de c1, isto e: d + r2 <= r1. A distancia d entre dois pontos com coordenadas (x1, y1) e (x2, y2) e calculada pela seguinte
formula:  d = sqrt(((x2-x1)**2)+((y2-y1)**2))*/

/*Estruturas de dados*/

typedef struct ponto
{
    int x, y;
} coordenadas; 

typedef struct circle
{
    char nome[10];
    coordenadas center;
    float radius;
} Circulo;


Circulo *criaCirculo(char nome_circulo[10], float a, float b, float r)
{
    Circulo *p; p = malloc(sizeof(Circulo));  
    strcpy(p->nome, nome_circulo);
    p->center.x = a;
    p->center.y = b; 
    p->radius = r;

    return p;
}

/*Funcoes*/

int contem(Circulo *c1, Circulo *c2)
{
    int x, co1, co2, d1, d2;
    d1 = c2->center.x - c1->center.x;
    d2 = c2->center.y - c1->center.y;
    co1 = pow((d1), 2);
    co2 = pow((d2), 2);
    x = (sqrt(co1 + co2));
}

/* Main */

int main(void)
{
    Circulo * c1, * c2, * c3;  
    c1 = criaCirculo("Circulo01",3.0,4.0,2.0);  
    c2 = criaCirculo("Circulo02",3.0,3.0,1.0);  
    c3 = criaCirculo("Circulo03",1.0,5.0,1.0);  
    printf("%d\n",contem(c1,c2));  
    printf("%d\n",contem(c1,c3));  
    free(c1);  
    free(c2);  
    free(c3);  
    return 0;
}
