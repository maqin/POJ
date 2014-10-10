#include<iostream>
#include<string>
using namespace std;

int main(){
    string line;
    
    while(getline(cin,line)){
        if(line=="#")
            break;
        int res = 0;
        for(int i = 0; i<line.length(); i++){
            if(line[i]==' ')
                continue;
            res += (i+1)*(line[i]-'A'+1);
        }
        cout<<res<<endl;
    }
    return 0;
}
