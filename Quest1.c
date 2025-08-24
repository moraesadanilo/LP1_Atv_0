void retornaPrimo(int N);
float conversorTemp(float t, char e);

int main()
{   int N;
    
    //PRINT ATE N
    
    scanf("%i", &N);
    
    //PRINT ATE N

    for(int i=1; i<=N; i++){
        printf("%i\n", i);    
    }

    /*
    //FATORIAL
    int fatorial=1;
    if(N==0 || N==1){
        printf("%i", fatorial);    
    }else{
        for(int i=2; i<=N; i++){
            fatorial=fatorial*i;   //ou  fatorial*=i;
        }
    printf("%i", fatorial);    
    }
    */
    /*
    float T=25;
    char TD= 'b';
    
    float R = conversorTemp(T, TD);
    
    printf("O resultado da conversão é: %.2f", R);
    
    //retornaPrimo(N);
    */


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