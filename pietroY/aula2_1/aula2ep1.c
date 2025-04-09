//funçaõ printf() para exibir mensagens
//na saída padão
#include <stdio.h>
int main(void){ 

    printf("\033c");//limpar a tela
    printf("Ola mundo");
    printf("\%d numero inteiro %d",10);
    printf("\%i numero inteito %i", 10);
    printf("\%X número inteiro base Hexa %X",10);
    printf("\%F número ponto flutuante %f",10);
    printf("\%e número em notação científica %e",10);
    printf("\%c caractéres alfanúmericos (texto) %c",'d');
    return 0;
}
