#include<iostream>
using namespace std;
int board[4][4];
int maxv= 100;

bool solve(){
    for(int i = 0;i<4; i++)
        for(int j = 0; j<4;j++)
            if(board[i][j]!=board[0][0])
                return false;
    return true;
}

void turn(int x, int y){
    if(x>=0&&x<4 &&y>=0&&y<4)
        board[x][y]=!board[x][y];
}
void flip(int x){
    int r = x/4;
    int c = x%4;
    turn(r,c);
    turn(r+1,c);
    turn(r-1,c);
    turn(r,c+1);
    turn(r,c-1);
}
void dfs(int x, int y){
    if(solve()){
        if(maxv>y)
            maxv = y;
        return;
    }
    if(x==16)
        return ;
    dfs(x+1,y);
    flip(x);
    dfs(x+1,y+1);
    flip(x);
}

int main(){
    char ch;
    
    for(int i = 0;i<4; i++)
        for(int j = 0; j<4; j++){
            
            cin>>ch;
            if(ch=='w') board[i][j]=0;
            else board[i][j]=1;
        }
    dfs(0,0);
    if(maxv==100) cout<<"Impossible"<<endl;
    else cout<<maxv<<endl;
    return 0;
}
