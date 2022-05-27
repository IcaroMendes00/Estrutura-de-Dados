#include <stdio.h>
#include <stdlib.h>



int main(){
    
    unsigned int idade, segundos_por_ano, segundos_de_vida; 

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    segundos_por_ano = 31557600;
    segundos_de_vida = idade * segundos_por_ano;
    
    printf("Voce possui: %d anos de idade, o que equivalem a: %d segundos de vida\n", idade, segundos_de_vida);

    return 0;
}
