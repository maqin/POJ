#include<iostream>
#include<stdio.h>
using namespace std;
#define maxV 15000
#define row 21
int r[row];
int w[row];
int dp[row][maxV];
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i = 0; i<m; i++)
        scanf("%d",&r[i]);
    for(int i = 1; i<=n; i++)
        scanf("%d",&w[i]);
    
    dp[0][maxV>>1] = 1;
    
    for(int i = 1; i<=n; ++i){
        for(int j = 0; j<=maxV; j++)
            if(dp[i-1][j])
                for(int k=0; k<m; k++)
                    dp[i][j+w[i]*r[k]]+=dp[i-1][j];
    }
    
    printf("%d\n",dp[n][maxV>>1]);
    return 0;
}
