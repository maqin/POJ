#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
    int r,m,y;
    scanf("%d %d %d",&r,&m,&y);
    double res = m;
    double rate = 1+1.0*r/100;
    while(y--){
        res *= rate;
       // cout<<res<<endl;
    }
    printf("%d\n",(int)floor(res));
    return 0;
}
