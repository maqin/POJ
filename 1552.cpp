#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n,n!=-1){
        
        int number[15]={0};
        int item[100]={0};
        item[n]=1;
        number[0]=n;
        int i;
        for(i = 1;i<=15;i++){
            int m;
            cin>>m;
            if(m==0)
                break;
            else{
                item[m]=1;
                number[i]=m;
            }
        }
        //cout<<"check "<<i<<endl;
        int res = 0;
        for(int j=0;j<i;j++){
            if(number[j]%2)
                continue;
            int t = number[j]/2;
            if(item[t]==1)
                res++;
        }
        cout<<res<<endl;
    }
    return 0;
}
