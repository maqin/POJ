#include<iostream>
#include<stdio.h>
using namespace std;
int dp[1001];
int num[1001];
int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
        scanf("%d",&num[i]);
    int res = 1;
    for(int i = 0; i<n; i++){
        dp[i] = 1;
        for(int j = i-1; j>=0; j--){
            if(num[i]>num[j]&&dp[j]+1>dp[i])
                dp[i] = dp[j]+1;
            if(dp[i]>res)
                res = dp[i];
        }
    }
    printf("%d\n",res);
    return 0;
}
