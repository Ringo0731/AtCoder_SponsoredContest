#include<stdio.h>

int main(void){

    int N,Q,i,j,result = 0;
    char s[200000],t[200000],d[200000],golem[200000];

    scanf("%d %d",&N,&Q);
    scanf("%s",&s);
    for(i = 0;i < Q;i++){
        scanf("%s %s",t[i],d[i]);
        golem[i] = 1;
    }

    for(i = 0;i < Q;i++){
        if(d[i] == 'R'){
            for(j = Q - 1;j > 0;j--){
                if(s[j - 1] == t[i]){
                    golem[j] = 1;
                    golem[j - 1] = 0;
                }
            }
        }else{
            for(j = 0;j < Q;j++){
                if(s[j + 1] == t[i]){
                    golem[j] = 1;
                    golem[j + 1] = 0;
                }
            }
        }
    }

    for(i = 0;i < Q;i++){
        if(golem[i] == 1){
            result++;
        }
    }

    printf("%d",result);
    return 0;
}