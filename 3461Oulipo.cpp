#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
#define W 100010
int nextval[W];
char s[W],t[10*W];
int slen,tlen;
void getnext(){
    nextval[0] = -1;
    int i = 0;
    int j = -1;
    while(i<slen){
        if(j==-1||s[i]==s[j]){
            i++,j++,nextval[i]=j;
        }else
            j=nextval[j];
    }
}
int kmp(){
    int i = 0,j=0,count=0;
    while(i!=tlen&&j!=slen){
        if(t[i]==s[j]||j==-1)
            ++i,++j;
        else
            j=nextval[j];
        if(j==slen){
            count++;
            j=nextval[j];
        }
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    
    while(n--){
        scanf("%s%s",s,t);
        slen = strlen(s);
        tlen = strlen(t);
        getnext();
        int ans = kmp();
        printf("%d\n",ans);
    }
    return 0;
}
