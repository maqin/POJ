#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int sticks[65];
int cnt,s,n;
bool vis[65];
bool cmp(int x, int y){
    return x>y;
}
bool cut(int num,int len, int start){
    if(num==cnt)
        return true;
    int same=-1;
    for(int i =start; i<n; i++){
        if(vis[i]||sticks[i]==same)
            continue;
        vis[i]=true;
        if(len+sticks[i]<s){
            if(cut(num,len+sticks[i],i))
                return true;
            else
                same=sticks[i];
        }
        else if(len+sticks[i]==s){
            if(cut(num+1,0,0))
                return true;
            else
                same=sticks[i];
        }
        vis[i]=false;
        if(len==0)
            break;
    }
    return false;
}
int main(){
    while(cin>>n, n){
        
        int sum=0;
        int len = 0;
        for(int i =0;i<n; i++){
            cin>>sticks[i];
            sum+=sticks[i];
            len=max(len,sticks[i]);
        }
        sort(sticks,sticks+n, cmp);
        
        
        for(s = len; s<=sum;s++){
            if(sum%s)
                continue;
            cnt=sum/s;
            memset(vis,false,sizeof(vis));
            if(cut(1,0,0)){
                printf("%d\n",s);
                break;
            }
        }
    }
    return 0;
}
