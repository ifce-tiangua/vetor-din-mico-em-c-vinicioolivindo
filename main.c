#include <stdio.h>
#include <stdlib.h>

int main(){

    int tamVetor;
    scanf("%d", &tamVetor);

    int *vetor = (int *)malloc(tamVetor * sizeof(int));

    if(vetor == NULL){
        printf("[vazio]");
    }

    for(int i = 0; i < tamVetor; i++){
        scanf("%d", &vetor[i]);
    }

    
    printf("[");
    for(int l = 0; l < tamVetor; l++){
        printf("%d", vetor[l]);
        if(l < tamVetor-1){
            printf(", ");
        }
    }
    printf("]");

    free(vetor);

    return 0;
}