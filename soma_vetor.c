#include <stdio.h>

int main()
{   
    int n, soma=0;
    int numeros[5];
    printf("Soma do vetor: ");
    for(int i=0; i<5; i++){
        scanf("%i", &n);
        numeros[i]=n; 
        soma+=numeros[i];
    }
    
    printf("A soma dos elementos eh %i.", soma);


    return 0;
}
