#include <stdio.h>
#include <locale.h>

void retornaPrimo(int N);

int main(){   
    setlocale(LC_ALL, "Portuguese");
    int N;
    
    printf("Informe qual numero deseja saber se eh primo: ");
    scanf("%i", &N);
    retornaPrimo(N);
   
    return 0;
}

void retornaPrimo(int N){
    if(N<1){
        printf("Não se aplica");
    }else if(N==1){
        printf("Não é primo");
    }else if(N>1){
        
        for(int i=2; i<N; i++){
            if(N%i==0){
            printf("Não é primo");
            return;
            }
        }
    printf("É primo");
    }
}