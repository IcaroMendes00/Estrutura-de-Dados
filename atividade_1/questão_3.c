#include <stdio.h>
#include <stdlib.h>

int funcao_consoante(char *s)

{
  register int i = 0, consoante = 0;
  
  while(s[i] != '\0')
  {
                  
    switch(s[i])
    {
      case 'b':
      case 'c': 
      case 'd':
      case 'f':            
      case 'g':
      case 'h':           
      case 'j':
      case 'k': 
      case 'l':
      case 'm':
      case 'n':
      case 'p':
      case 'q':
      case 'r':
      case 's':
      case 't':
      case 'v':
      case 'w':
      case 'x':
      case 'y':   
      case 'z':  
      case 'B':
      case 'C': 
      case 'D':
      case 'F':            
      case 'G':
      case 'H':           
      case 'J':
      case 'K': 
      case 'L':
      case 'M':
      case 'N':
      case 'P':
      case 'Q':
      case 'R':
      case 'S':
      case 'T':
      case 'V':
      case 'W':
      case 'X':
      case 'Y':   
      case 'Z':                                
        consoante++;        
    }               
    i++;               
                   
  }  
   
  return consoante;  
    
}

int funcao_vogal(char *s)
{
  register int i = 0, vogal = 0;
  
  while(s[i]!='\0')
  {
                  
    switch(s[i])
    {
      case 'a':
      case 'A': 
      case 'e':
      case 'E':            
      case 'i':
      case 'I':           
      case 'o':
      case 'O': 
      case 'u':
      case 'U':      
        vogal++;        
    }               
    i++;               
                   
  }  
   
  return vogal;  
    
}


int main (){

    int n_vogal, n_consoante;
    char entrada[50];
    
    printf("Digite a palavra desejada: ");
    gets(entrada);

    n_vogal = funcao_vogal(entrada);
    n_consoante = funcao_consoante(entrada);
    
    
    printf("A palavra digitada foi: %s\n", entrada);
    printf("Numero de vogais da palavra: %d\n", n_vogal);
    printf("Numero de consoantes da palavra: %d\n", n_consoante);

    return 0;

}