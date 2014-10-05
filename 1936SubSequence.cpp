#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1,s2;
    while(cin>>s1>>s2){
        int p1=0;
        int i=0;
        for(;i<s1.length();){
            if(p1==s2.length())
                break;
            if(s2[p1]!=s1[i])
                p1++;
            else{
                p1++;
                i++;
            }
        }
        if(i==s1.length())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
