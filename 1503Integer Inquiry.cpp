#include<iostream>
#include<string>
using namespace std;

int res[121];
int line[101];
int main(){
    string s;
    while(cin>>s){
        if(s=="0")
            break;
        int token = 0;
        int n = s.length()-1;
        int p = 120;
        int i = n;
        while(i>=0 || token>0){
            int cur=0;
            if(i>=0){
                cur = s[i]-'0';
                i--;
            }
            int v = res[p]+token+cur;
            int t = v%10;
            token = v/10;
            res[p] = t;
            p--;
        }
    }
    int c = 0;
    while(res[c]==0) c++;
    for(; c<121; c++){
        cout<<res[c];
    }
    cout<<endl;
    return 0;
}
