#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int m;
        scanf("%d",&m);
        int input[m];
        for(int i=0; i<m; i++)
            scanf("%d",&input[i]);
        int left[m];
        int right[m];
        left[0]=input[0];
        right[m-1]=input[m-1];
        int maxV=input[0];
        int value = input[0];
        for(int i = 1; i<m; i++){
            if(value<0)
                value =0;
            value += input[i];
            maxV=max(maxV,value);
            left[i]=maxV;
        }
            
        int rightMaxV = input[m-1];
        int rightvalue = input[m-1];
        for(int i=m-2;i>=0;i--){
            if(rightvalue<0)
                rightvalue=0;
            rightvalue += input[i];
            rightMaxV = max(rightMaxV,rightvalue);
            right[i]=rightMaxV;
        }
        int res = left[0]+right[1];
        for(int i = 2;i<m;i++)
            res = max(res,left[i-1]+right[i]);
        
        cout<<res<<endl;
    }
    return 0;
}
