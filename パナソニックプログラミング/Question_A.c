#include<stdio.h>

int main(void){

    int S[] = {1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51};
    int i,K;

    scanf("%d",&K);

    printf("%d\n",S[K-1]);
    return 0;
}