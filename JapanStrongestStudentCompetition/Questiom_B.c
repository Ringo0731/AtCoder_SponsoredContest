#include<stdio.h>

#define MAX_OF_N 2000

int main(void){

    int N,A[MAX_OF_N],i,j;
    unsigned long K,tentou1len=0,ans;
    scanf("%d %lu",&N,&K);
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }

    for(i=0;i<N;i++){
        for(j=i;j<N;j++){
            if((A[i] - A[j])>0){
                tentou1len++;
               // printf("%lu\n",tentou1len);
            }
        }
    }

    ans = tentou1len * K;
    //printf("%lu\n",ans);
    while(K > 1){
        K--;
        ans = (ans + tentou1len * K) % (1000000000+7);
        //printf("%lu\n",ans);
    }

    printf("%lu\n",ans);
    return 0;
}
