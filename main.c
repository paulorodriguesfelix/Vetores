
    
#include <stdio.h>

int main()
{
    
    int vetor[5];
    int  cont;
    printf("DIGITE 5 NUMEROS INTEIROS PARA SER ARMAZENADO EM UM VETOR.\n");
    printf("==========================================================\n");
    for(int i = 0; i < 5; i++){
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }
    cont = 0;
    for(int i = 0; i < 5; i++){
        if(vetor[i] > 100){
            cont +=1;
        }
    }    
    printf("NÚMEROS MAIORES QUE 100: %d", cont);
    return 0;
}
