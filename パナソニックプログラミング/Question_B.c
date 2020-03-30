#include<stdio.h>

int main(void){

    long int H,W,ans;

    scanf("%ld %ld",&H,&W);

    if(H == 1 || W == 1){
        ans = 1;
    }else if(W % 2 == 0){
        ans = (W/2)*H;
    }else if(H % 2 == 0){
        ans = (H/2)*W;
    }else{
        ans = ((W+1)/2)*H - H/2;
    }

    printf("%ld\n",ans);
    return 0;
}
