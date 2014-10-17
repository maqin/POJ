#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
string s[16];
int n;
void recur(int start){
    if(start==n-1){
        cout<<s[start]<<endl;
        return;
    }
    if(start>=n)
        return;
    cout<<s[start]<<endl;
    recur(start+2);
    cout<<s[start+1]<<endl;
}

int main(){
    int set = 1;
    while(scanf("%d",&n), n){
        for(int i = 0; i<n; i++){
            cin>>s[i];
        }
        printf("SET %d\n",set);
        set++;
        recur(0);
    }
    return 0;
}
