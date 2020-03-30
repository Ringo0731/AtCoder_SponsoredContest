#include<stdio.h>
#include<string.h>

int main(void){

    int N,i,j,k;
    char S[11];

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        S[i] = 'a';
    }

    for(i = 0;i < N;i++){
        for(k = N-1;k > i;k--){
            for(j = 0;j < N;j++){
                printf("%c",S[j]);
            }
            printf("\n");
            S[k]++;
        }
    }

    return 0;
}
