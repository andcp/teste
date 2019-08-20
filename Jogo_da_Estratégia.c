#include<stdio.h>

int main(){
	int jogadores, rodadas;
	scanf("%d %d", &jogadores, &rodadas);
	int vetor[jogadores*rodadas];
    int i = 0;
    while(i < jogadores*rodadas){
        scanf("%d", &vetor[i]);
        i++;
    }

    int otovetor[jogadores];
    i = 0;
    while(i < jogadores){
        otovetor[i] = 0;
        i++;
    }
    i = 0;
    int c = 0;

    while(i < jogadores){
        for(c = 0; c < rodadas; c++){
            otovetor[i] = otovetor[i] + vetor[c*jogadores + i];
        }
        i++;
    }
    
    int maior = 0;
    i = 0;

    while(i < jogadores){
        if(otovetor[i] >= otovetor[maior]){
            maior = i;
        }
        i++;
    }

    printf("%d\n", (maior + 1));
    return(0);
}
