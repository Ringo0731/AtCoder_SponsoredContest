#include<stdio.h>

#define LARGEST 50

int main(void){
    
    int N,x[LARGEST],y[LARGEST],cost = 0,i,p,q;

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%d %d",&x[i],&y[i]);
    }

    p = x[N - 1] - x[N - 2];
    q = y[N - 1] - y[N - 2];
    printf("最初 p:%d q:%d\n",p,q);

    for(i = N - 2;i > 0;i--){
        if((x[i] - x[i - 1]) != p || (y[i] - y[i -1]) != q){
            cost++;
            p = x[i] - x[i - 1];
            q = y[i] - y[i - 1];
            printf("%d回目の変更 p:%d q:%d\n",cost,p,q);
        }
    }

    if(cost == 0){
        cost++;
    }

    printf("%d",cost);
    return 0;
}