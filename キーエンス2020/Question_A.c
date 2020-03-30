#include<stdio.h>

int main(void){

    int H,W,N,ans = 0;

    scanf("%d %d %d",&H,&W,&N);

    if(H > W){
        int tmp = H;
        H = W;
        W = tmp;
    }

    int i = 0;
    while(ans == 0){
        i++;
        if(H*i >= N){
            ans = i;
        }else if(W*i >= N){
            ans = i;
        }
    }

    printf("%d\n",ans);
    return 0;
}