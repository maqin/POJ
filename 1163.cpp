#include<iostream>
using namespace std;
int num[101][101];

int main(){
    int n;
    cin>>n;
    int line = n;
    int t=0;
    while(n--){
        for(int i = 0;i<=t; i++){
            cin>>num[t][i];
        }
        t++;
    }
    for(int j = 1; j<line; j++)
        for(int k = 0; k<=j; k++){
            if(k==0)
                num[j][k] += num[j-1][k];
            else if(k==j)
                num[j][k] += num[j-1][k-1];
            else
                num[j][k] += max(num[j-1][k-1],num[j-1][k]);
        }
    
    int res = 0;
    for(int m=0; m<line; m++)
        res = max(res,num[line-1][m]);
    cout<<res<<endl;
    
    return 0;
}
