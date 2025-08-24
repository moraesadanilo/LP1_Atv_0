

int main()
{   int N;
    
    scanf("%i", &N);
    
    //FATORIAL
    int fatorial=1;
    if(N==0 || N==1){
        printf("%i", fatorial);    
    }else{
        for(int i=2; i<=N; i++){
            fatorial=fatorial*i;   //ou  fatorial*=i;
        }
    printf("O fatorial de %i eh: %i", N, fatorial);    
    }
    
    
    return 0;
}
