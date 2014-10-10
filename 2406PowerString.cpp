#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int len;
char a[1000010];
int n[1000010];

void getnext(){
    int i = 0;
    int j = -1;
    n[0] = -1;
    while(i<len){
        if(j==-1||a[i]==a[j])
            i++,j++,n[i]=j;
        else
            j=n[j];
    }
}
int main(){
    while(scanf("%s",a),a[0]!='.'){
        len = strlen(a);
        getnext();
        int ans = len-n[len];
        if(len%ans == 0)
            printf("%d\n",len/ans);
        else
            printf("1\n");
    }
    return 0;
}
