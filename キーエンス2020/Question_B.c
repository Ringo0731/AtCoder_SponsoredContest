#include<stdio.h>

#define MAX_NUM 100001

void merge_sort (long int array1[],long int array2[],long int left,long int right) {
    long int i, j, k, mid;
    long int work1[MAX_NUM],work2[MAX_NUM]; 
    if (left < right) {
        mid = (left + right)/2; 
        merge_sort(array1, array2,left, mid); 
        merge_sort(array1, array2,mid+1, right);  
        for (i = mid; i >= left; i--){
            work1[i] = array1[i]; 
            work2[i] = array2[i];
        }
        for(j = mid+1; j <= right; j++){
            work1[right-(j-(mid+1))] = array1[j]; 
            work2[right-(j-(mid+1))] = array2[j];
        }

        i = left;
        j = right;
        for(k = left; k <= right; k++) {
            if(work1[i] < work1[j]){ 
                array1[k] = work1[i]; 
                array2[k] = work2[i];
                i++;
            }else{
                array1[k] = work1[j];
                array2[k] = work2[j];
                j--;
            }
        }
    }
}

int main(void){

    long int N,i,ans,remove=0;
    long int X[MAX_NUM+1],L[MAX_NUM+1];

    scanf("%ld",&N);
    for(i = 0;i < N;i++){
        scanf("%ld %ld",&X[i],&L[i]);
    }

    merge_sort(X,L,0,N-1);

    for(i = 0;i < N-1;i++){
        if(X[i]+L[i] > X[i+1]-L[i+1]){
            remove++;
            i++;
        }
    }

    ans = N - remove;
    printf("\n");
    for(i = 0;i < N;i++) printf("%ld %ld\n",X[i],L[i]);
    printf("%ld\n",ans);
    return 0;
}