#include<iostream>
using namespace std;
int square[101][101];
int pond[101][101];
int res = 0;
int n,m;
int dy[8] = {1,1,0,-1,-1,-1,0,1};
int dx[8] = {0,-1,-1,-1,0,1,1,1};

void dfs(int x, int y){//x = row;y = col
    if(x<0||x>=n)
        return;
    if(y<0||y>=m)
        return;
    if(pond[x][y]==0||square[x][y]==1)
        return;
    square[x][y]=1;
    //cout<<"here go"<<x<<" "<<y<<endl;
    for(int i = 0;i<8; i++){
       // cout<<"we will search : "<<x+dx[i]<<" "<<y+dy[i]<<endl;
        dfs(x+dx[i],y+dy[i]);
    }
}

int main(){
    cin>>n>>m;
    char ch;
    for(int i=0;i<n; i++){
        for(int j =0; j<m; j++){
            cin>>ch;
        if(ch=='W')
            pond[i][j]=1;
        else
            pond[i][j]=0;
        }
    }
    
    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            if(pond[i][j]==1&&square[i][j]==0){
                dfs(i,j);
                //cout<<"---------"<<endl;
               // cout<<i<<" "<<j<<endl;
                //cout<<"--------"<<endl;
                res ++;
            }
    cout<<res<<endl;
    return 0;
}
