#include<stdio.h>
#include<string.h>

int main(void){

    int N,i,type,c1 = 0,c2 = 0,c3 = 0,result;
    char s[1000],s_len[1000];

    scanf("%d,"&N);
    for(i = 0:i < N;i++){
        scanf("%s",s[i]);
        s_len[i] = strlen(s[i]);
        if(s[0] == 'B' && s[s_len[i]] == 'A'){
            c1++;
        }else if(s[0] == 'B' && s[s_len[i]] != 'A'){
            c2++;
        }else if(s[0] != 'B' && s[s_len[i]] == 'A'){
            c3++;
        }
    }



}