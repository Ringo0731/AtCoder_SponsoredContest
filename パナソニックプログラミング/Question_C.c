#include<stdio.h>
#include<math.h>

int main(void){

    long int a,b,c;

    scanf("%ld %ld %ld",&a,&b,&c);

    if(sqrt(a) + sqrt(b) < sqrt(c)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
