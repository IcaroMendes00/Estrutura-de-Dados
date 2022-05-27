#include <stdlib.h>
#include <stdio.h>


int funcao_diassemanas (int n) 
{
    if (n >= 7) 
    {
        if (n == 7)
        {
            printf("%d dias equivalem a 1 semanas e 0 dias", n);
        }

        else
        {
            int n_semanas, dias_restantes;

            n_semanas = n / 7;
            dias_restantes = n % 7;
            printf("%d dias equivalem a %d semanas e %d dias", n, n_semanas, dias_restantes);

        }
    }
    
    else
    {
        printf("%d dias equivalem a 0 semanas e %d dias", n);
    }

}

int main(){

    int entrada;
    while (1)
    {
        printf("\nDigite um numero de dias: \n");
        scanf("%d", &entrada);
        if (entrada == 0)
        {
            break;
        }
        else
        {
        funcao_diassemanas(entrada);
        }
    }
    
    return 0;
}