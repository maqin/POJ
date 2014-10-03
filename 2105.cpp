#include<iostream>
#include<math.h>
#include<fstream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string line;
    getline(cin,line);
    while(n--){
        string s;
        getline(cin,s);
        int p =0;
        for(int i = 0; i<4;i++){
            int res= 0;
            int m=pow(2,7);
            for(int j = 0;j<8;j++){
                int w=s[p]-'0';
                res+=w*m;
                m/=2;
                p++;
            }
            if(i==0)
                cout<<res;
            else
                cout<<"."<<res;
        }
        cout<<endl;
    }
    return 0;
}
