#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    while(cin>>n,n){
        vector<vector<char> > v;
        vector<char> sub;
        string s;
        cin>>s;
        //cout<<"input string "<<s<<endl;
        int cnt = 0;
        bool rv = false;
        for(int i = 0; i<=s.length(); i++){
            if(cnt==n){
                if(rv){
                    reverse(sub.begin(),sub.end());
                    v.push_back(sub);
                }
                else
                    v.push_back(sub);
                vector<char>().swap(sub);
                cnt=0;
                rv = rv==true? false: true;
            }
            if(i==s.length())
                break;
            sub.push_back(s[i]);
            cnt++;
        }
        
       //cout<<v.size()<<endl;
        
        int row = v.size();
        int col = v[0].size();
        string res;
        /*
        cout<<"----------"<<endl;
        
        for(int i = 0; i<col; i++){
            for(int j = 0; j<row; j++){
                cout<<v[j][i]<<" ";
            }
            cout<<endl;
        }
        cout<<"---------"<<endl;
        */
        for(int i = 0; i<col; i++){
            for(int j = 0; j<row; j++){
                res.push_back(v[j][i]);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
