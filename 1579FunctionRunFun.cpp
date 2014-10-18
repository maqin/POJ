#include<iostream>
#include<stdio.h>
using namespace std;
int w[21][21][21];
int caculate(int a, int b, int c){
    if(a<=0 || b<=0 || c<=0)
       return w[0][0][0] = 1;
    if(a>20 || b>20||c>20)
        return w[20][20][20]==0?caculate(20,20,20):w[20][20][20];
    if(w[a][b][c]!=0)
        return w[a][b][c];
    if(a<b && b<c)
        return w[a][b][c]=caculate(a,b,c-1)+caculate(a,b-1,c-1)-caculate(a,b-1,c);
    else
        return w[a][b][c]=caculate(a-1,b,c)+caculate(a-1,b-1,c)+caculate(a-1,b,c-1)-caculate(a-1,b-1,c-1); 
}
int main(){
    int a, b ,c;
    while(cin>>a>>b>>c){
        if(a==-1&&b==-1&&c==-1)
            break;
        printf("w(%d, %d, %d) = %d\n",a,b,c,caculate(a,b,c));
    }
    return 0;
}
