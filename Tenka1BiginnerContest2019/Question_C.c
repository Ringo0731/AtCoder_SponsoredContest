#include<stdio.h>

int main(void){

    int N,i,ans1 = 0,ans2 = 0;
    char S1[200000],S2[200000];

    scanf("%d",&N);
    scanf("%s",S1);

    for(i = 0;i < N;i++){
        S2[i] = S1[i];
    }

    for(i = 0;i < N;i++){
        if(S1[i] == '#' && S1[i + 1] == '.' && S1[i + 2] == '#'){
            ans1++;
            if(i + 1 != N){
                S1[i + 1] = '#';
            }
        }
    }

    for(i = N - 1;i >= 0;i--){
        if(S2[i] == '.' && S2[i - 1] == '#'){
            ans2++;
            if(i - 1 >= 0){
                S2[i - 1] = '.';
            }
        }
    }

    if(ans1 < ans2){
        printf("%d",ans1);
    }else{
        printf("%d",ans2);
    }
    return 0;
}