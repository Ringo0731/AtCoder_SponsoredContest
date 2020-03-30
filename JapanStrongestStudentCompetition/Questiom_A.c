#include<stdio.h>

int main(void){
    

    int M,D,i,j,ans=0;
    scanf("%d %d",&M,&D);

    for(i=4;i<=M;i++){
        for(j=22;j<=D;j++){
            if(i == ((j/10)*(j%10)) && (j%10) >=2 ){
               // printf("%d月%d日\n",i,j);
                ans++;
            }
        }
    }

    printf("%d",ans);
    return 0;
}
