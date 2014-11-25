#include<iostream>
#include<queue>
#include<string.h>
#include<stdio.h>
using namespace std;
int s_x, s_y, e_x, e_y;
int dir[8][2]={{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};
int vis[305][305];
int len;
struct point{
    int x;
    int y;
    int step;
};
bool canPlace(int x, int y){
    if(x>=0 && x<len && y>=00 &&y<len)
        return true;
    return false;
}
int dfs(){
    if(s_x==e_x && s_y==e_y)
        return 0;
    queue<point> q;
    point p;
    p.x = s_x;
    p.y = s_y;
    p.step = 0;
    q.push(p);
    vis[s_x][s_y] = 1;
    while(!q.empty()){
        point t = q.front();
        q.pop();
        if(t.x==e_x && t.y==e_y)
            return t.step;
        for(int i = 0; i<8; i++){
            int xx = t.x+dir[i][0];
            int yy = t.y+dir[i][1];
            if(canPlace(xx,yy) && !vis[xx][yy]){
                vis[xx][yy] = 1;
                point tmp;
                tmp.x = xx;
                tmp.y = yy;
                tmp.step = t.step+1;
                q.push(tmp);
            }
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        cin>>len;
        cin>>s_x>>s_y>>e_x>>e_y;
        memset(vis,0,sizeof(vis));
        cout<<dfs()<<endl;
    }
    return 0;
}
