#include<stdio.h>

int main(void){

    int N,i,j,k;
    long int A[5001];
    long long int ans = 0;

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%ld",&A[i]);
    }

    for(j = 1;j < N-1;j++){
        long long int l=0,r=0;
        for(i = 0;i < j;i++){
            if(A[i] < A[j]) l++;
        }
        for(k = j+1;k < N;k++){
            if(A[k] < A[j]) r++;
        }
        ans += l*r;
    }

    printf("%lld\n",ans);
    return 0;
}
