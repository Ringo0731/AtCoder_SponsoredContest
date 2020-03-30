#include<stdio.h>

#define MAX_LENTH 30001

int main(void){

    int N,i,j,k,ans = 0,password,find_num;
    int S_num[MAX_LENTH];
    char S[MAX_LENTH];

    scanf("%d",&N);
    scanf("%s",S);

    for(i = 0;i < N;i++){
        S_num[i] = (int)(S[i]-'0');
    }

    for(password = 0;password <= 999;password++){
        int c[3] = {password/100,(password/10)%10,password%10};
        find_num = 0;
        for(i = 0;i < N;i++){
            if(S_num[i] == c[find_num]){
                find_num++;
                if(find_num == 3) break;
            }
        }
        if(find_num == 3) ans++;
    }

    printf("%d\n",ans);
    return 0;
}
