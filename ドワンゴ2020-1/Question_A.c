#include<stdio.h>
#include<string.h>

int total_time(int N,char s[],int a){
    int ret=0;
    for(int i = a;i < N;i++){
        ret += s[i];
    }
    return ret;
}

int main(void){

    int N,t[51],i,ans;
    char s[51],X;

    scanf("%d",&N);
    for(i = 0;i < N;i++){
        scanf("%s %d",s[i],&t[i]);
    }
    scanf("%s",X);

    for(i = 0;i < N;i++){
        if(strcmp(s[i],X) == 0){
            ans = total_time;
        }
    }

    printf("%d\n",ans);
    return 0;
}
