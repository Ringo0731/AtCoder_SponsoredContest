#include<stdio.h>

int main(void){

    int A,B,C;

    scanf("%d %d %d",&A,&B,&C);

    if(A < B){
        if(A < C && B > C){
            printf("Yes");
        }else{
            printf("No");
        }
    }else{
        if(B < C && A > C){
            printf("Yes");
        }else{
            printf("No");
        }
    }

    return 0;
}