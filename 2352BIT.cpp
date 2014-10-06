#include<iostream>
#include<stdio.h>
#include<string.h>
#define MAX 32010
using namespace std;

int res[MAX];
int bit[MAX];
int lowbit(int x){
    return x&(-x);
}

void update(int x){
    while(x<MAX){
        bit[x]++;
        x+=lowbit(x);
    }
}
int sum(int x){
    int sum = 0;
    while(x>0){
        sum+=bit[x];
        x-=lowbit(x);
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    
    memset(res,0,sizeof(res));
    memset(bit,0,sizeof(bit));
    int x,y;
    for(int i = 1; i<=n; i++){
        scanf("%d%d",&x, &y);
        x++;
        res[sum(x)]++;
        update(x);
    }
    for(int i = 0;i<n; i++)
        cout<<res[i]<<endl;
    
    return 0;
}
