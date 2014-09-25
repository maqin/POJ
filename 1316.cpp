#include<iostream>
using namespace std;

int main(){
    int number[10001]={0};
    int p=0;
    while(p<=10001){
        int v = p;
        int t = p;
        while(t>0){
            v+=t%10;
            t/=10;
        }
        
        if(v<10001)
            number[v]++;
        p++;
    }
    
    for(int i =0;i<10001;i++)
        if(number[i]==0)
            cout<<i<<endl;
    return 0;
}
