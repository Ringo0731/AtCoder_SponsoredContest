#include<stdio.h>

int main(void){
    
    int N,K;

    scanf("%d %d",&N,&K);

    if(K == 1){
        printf("0");
    }else{
        printf("%d",N - K);
    }
    return 0;
}