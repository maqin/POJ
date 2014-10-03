#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b,c,d,e,f;
    
    while(true){
        cin>>a>>b>>c>>d>>e>>f;
        if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
            break;
        // cout<<ceil(1/36.0)<<endl;
        int num[4]={0,5,3,1};
        int res = 0;
        res += ceil(c/4.0)+d+e+f;
        int b2 = 5*d+num[c%4];
        if(b>b2){
            res += (b-b2+8)/9;
        }
        int a2 = res*36-f*36-e*25-d*16-c*9-b*4;
        if(a>a2){
            res += (a-a2+35)/36;
        }
        
        cout<<res<<endl;
    }
    return 0;
}
