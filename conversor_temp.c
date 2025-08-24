

#include <stdio.h>

float conversorTemp(float t, char e);

int main()
{   int N;
    float T;
    char EA; //EA - escala atual,     

    printf("Qual a escala atual (c ou f)?: ");   
    scanf("%c", &EA);
    printf("Teperatura na escala atual: ");
    scanf("%f", &T);
    
    float R = conversorTemp(T, EA);
    printf("A temperatura apos conversao eh: %.2f", R);
 
    return 0;
}

float conversorTemp(float t, char e){  //t-temperatura, e-escala.
    float r; //resultado
    if(e=='c' || e=='C'){
        r= t*1.8 +32;
        return r;
    }
    if(e=='f' || e=='F'){
        r= (t-32)/1.8;
        return r;
    }
    if(e!='f' || e!='F' || e!='c' || e!='C' ){
        printf("Erro de escala ");
        return 0;
    }
}
