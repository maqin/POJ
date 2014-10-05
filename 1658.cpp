#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int dif = b-a;
        int div = b/a;
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<" ";
        if((c-b)==dif&&(d-c)==dif)
            cout<<d+dif<<endl;
        else
            cout<<d*div<<endl;
    }
    return 0;
}
