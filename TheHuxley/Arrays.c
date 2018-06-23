#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int tamanhoA = 0, tamanhoB = 0;
    int k = 0, m = 0, i = 0, j = 0, count = 0;
    int todosMenores = 1;
    
    scanf("%d %d",&tamanhoA,&tamanhoB);
    scanf("%d %d",&k,&m);
    
    if((tamanhoA >=1 && tamanhoA <= 1000) && (tamanhoB >=1 && tamanhoB <= 1000)){
        if((k >= 1 && k <= tamanhoA) && (m >= 1 && m <= tamanhoB)){
            int a[tamanhoA], b[tamanhoB];
            for(i = 0; i < tamanhoA; i++){
                scanf("%d", &a[i]);
            }
            for(j = 0; j < tamanhoB; j++){
                scanf("%d", &b[j]);
            }
            for(i = 0; i < tamanhoA; i++){
                for(j = 0; j < tamanhoB; j++){
                    if(a[i]<b[j]){
                        count++;
                        if(todosMenores == 0){
                            todosMenores = 0;
                        }
                    }else{
                        todosMenores = 0;
                        break;
                    }
                }
            }
        }
    }
    
    if(todosMenores == 1 || count >= k){
        printf("YES");    
    }else{
        printf("NO");
    }
    
    
    
	return 0;
}