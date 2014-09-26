#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

double caculate(int n){
    double d = 1;
    for(int i = 1; i<=n; i++)
        d*=i;
    return 1.0/d;
}

int main(){
    double d = 0.0;
    printf("%c %c\n",'n','e');
    printf("- -----------\n");
    for(int i=0;i<10;i++){
        d += caculate(i);
        // printf("%d %11.9f\n",i,d);
        cout<<i<<" "<<setprecision(11)<<d<<'\n';
    }
    return 0;
}
