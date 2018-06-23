#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    char a = 'a';
    int ano = 0, auxA = 0;
    float count=0;
    float velocidade = 0, auxV=0, velocidadeMedia = 0;
    
    scanf("%c", &a);
    
    
    while(a != 'n'){
        scanf("%d%f",&ano,&velocidade);
        count++;
        if(ano >= auxA){
            auxA=ano;
        }
        if(velocidade >= auxV){
            auxV=velocidade;
        }
        velocidadeMedia += velocidade;
        
        scanf("%c", &a);
    }
    if(velocidadeMedia == 0){
        printf("zero");
    }else{
        printf("%.2f\n%d\n%.2f",auxV,auxA,velocidadeMedia/count);
    }
    
    return 0;
}
