#include<iostream>
using namespace std;

int main(){
    int i,j;
    while(cin>>i>>j){
        int m=0;
        int s=max(i,j);
        int e=min(i,j);
        for(int k=e;k<=s;k++){
            int t = k;
            int r =1;
            while(true){
                if(t==1)
                    break;
                if(t%2)
                    t=3*t+1;
                else
                    t=t/2;
                r++;
            }
            m=max(m,r);
        }
        cout<<i<<" "<<j<<" "<<m<<endl;
    }
    return 0;
}
