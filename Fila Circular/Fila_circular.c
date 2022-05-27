#include <stdio.h>
#include <stdlib.h>
#include "av3.h"


/*Implementacao do TAD Fila Seq. Circular */

/*Cria fila*/
queue *new_queue(){
    queue *q = (queue*)malloc(sizeof(queue));
    q->head = 0;
    q->tail = 0;
}

/*Verifica se a fila esta vazia*/
int is_queue_empty(queue *q){
    return q->head == q->tail;   /*se o inicio e fim forem iguais, significa que a fila esta vazia, retornando ela mesma "True"*/
}    

/*Verifica se a fila esta cheia*/
int is_queue_full(queue *q){
    return q->tail == N;       /*se o fim ja e equivalente ao numero maximo de espacos disponiveis*/
}

/*Exibe o head e tail (os primeiros e ultimos)*/
int view_value(queue *q){
    
    if (is_queue_empty(q)){
        printf("FILA VAZIA\n");
    }
    int a, b, h, t;
    a = q->head;b = q->tail;
    h = q->data[a];t = q->data[b-1];
    printf("O primeiro valor eh :%d\nO último valor eh:%d\n", h, t);
    }

/*Adiciona a fila*/
void enqueue(queue *q, int value){
    
    /*Verifica se a fila esta cheia*/
    if (is_queue_full(q)){
        printf("FILA CHEIA, não eh possível inserir valores");
        return;
    }
    q->data[q->tail % N] = value;    /*adiciona valor no fim da  fila*/
    q->tail++;                     /*adiciona +1 ao indice do fim*/
}

/*Retira da fila*/
int dequeue(queue *q){
    
    int aux;
    
    /*Verifica se a fila esta vazia*/
    if (is_queue_empty(q)){
        printf("FILA VAZIA, não eh possivel remover valores\n");
        return -1;
    }
    aux = q->data[q->head % N];
    return aux; 
    }

/*Exibe fila*/
void show_queue(queue *q){
    
    int i;
    
    /*Verifica se a fila esta vazia*/
    if (is_queue_empty(q)){
        printf("Fila vazia\n");
    } 
    
    /*Se nao*/
    else{
        printf("Fila: ");
    }
    
    /*Laco de repeticao para printar cada um dos elementos da fila*/
    for (i=q->head; i<q->tail; i++){
        printf(" [%2d] ", q->data[i % N]);
    }
    printf("\n");
}

/*Questao 3: recebe 2 listas e cria uma terceira adicionando os valores das duas primeiras listas de forma alterada*/
void combina_filas(fila_a, fila_b, fila_c){
    
    /*Verifica se alguma fila esta vazia*/
    if (is_queue_empty(fila_a)){printf("Primeira fila esta vazia");}
    if (is_queue_empty(fila_b)){printf("Segunda fila esta vazia");}
    
    
    while (is_queue_empty(fila_a) !=True){
        
        int a, b;
        a = dequeue(fila_a);
        enqueue(fila_c, a);

        if (is_queue_empty(fila_b) !=True)
            b = dequeue(fila_b);
            enqueue(fila_c, a);

    while (is_queue_empty(fila_b) !=True){
        int b;
        b = dequeue(fila_b);
        enqueue(fila_c, a);
    }
