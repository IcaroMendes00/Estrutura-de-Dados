//*************** Implementação da área de dados do TAD **************//

/*Numero maximo de nos*/
#define N 10

// Definição da estrutura Fila Seq. Circular

typedef struct {
    int head, tail;        /*Declara o head e tail (inicio e fim)*/
    int data[N];           /*Declara o tamanho de elementos na fila*/
}queue;

//************ A interface de uso do TAD Fila Seq. Circular **********//

/*Cria fila*/
queue *new_queue();  

/*Verifica se a fila esta vazia*/
int is_queue_empty(queue *q);

/*Verifica se a fila esta cheia*/
int is_queue_full(queue *q);

/*Exibe o head e tail (os primeiros e ultimos)*/
int view_value(queue *q); 

/*Adiciona a fila*/
void enqueue(queue *q, int value);

/*Retira da fila*/
int dequeue(queue *q); 

/*Exibe fila*/
void show_queue(queue *q); 

/*Questao 3: recebe 2 listas e cria uma terceira adicionando os valores das duas primeiras listas de forma alterada*/
void combina_filas(fila_a, fila_b, fila_c);