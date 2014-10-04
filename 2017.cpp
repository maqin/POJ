#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        if(n==-1)
            break;
        int pre;
        int hour;
        int l2=0;
        int res = 0;
        while(n--){
            cin>>pre>>hour;
            res+=pre*(hour-l2);
            l2=hour;
        }
        cout<<res<<" miles"<<endl;
    }
    return 0;
}
