#include<bits/stdc++.h>
using namespace std;

#define MAX_NUM 100001

int main(void){

    long int N,i,ans=0,t = 0,remove=0;
    long int X[MAX_NUM],L[MAX_NUM];
    pair<long,long> itv[MAX_NUM];

    cin >> N;
    for(i = 0;i < N;i++){
        cin >> X[i] >> L[i];
    }

    for(i = 0;i < N;i++){
        itv[i].first = X[i]-L[i];
        itv[i].second = X[i]+L[i];
    }
    sort(itv,itv + N);

    for(i = 0;i < N;i++){
        if(t < itv[i].second){
            ans++;
            t = itv[i].first;
        }
    }

    cout << ans << endl;
    return 0;
}