#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
char step[25][25];
int vis[25][25];
int sum;

void dfs(int x, int y){
    
    if(step[x][y]=='#' || vis[x][y]==1)
        return ;
    sum++;
    vis[x][y]=1;
    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x,y+1);
    dfs(x,y-1);
}
int main(){
    int m,n;
    while(cin>>m>>n){
        if(m==0&&n==0)
            break;
        getchar();
        sum=0;
        int b1,b2;
        memset(vis,0,sizeof(vis));
        memset(step,'#',sizeof(step));
        for(int i = 1;i<=n; i++){
            for(int j = 1;j<=m; j++){
                scanf("%c",&step[i][j]);
                if(step[i][j]=='@'){
                    b1=i;
                    b2=j;
                }
            }
            getchar();
        }
        dfs(b1,b2);
        cout<<sum<<endl;
    }
        return 0;
}
