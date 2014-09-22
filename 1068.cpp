#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int m;
        cin>>m;
        int p=0;
        int w=0;
        int sequence[m];
        for(int i = 0; i<m; i++)
            cin>>sequence[i];
        int len = 2*m;
        char parenthese[len];
        int s = 0;
        /*for(int i = 0; i<m; i++)
            cout<<sequence[i]<<" ";
        cout<<endl;*/
        int left = 0;
        int flag[len];
        for(int i = 0; i<len; i++){
            if(left==sequence[s]){
                parenthese[i]=')';
                flag[i]=0;
                s++;
            }else{
                flag[i]=1;
                left++;
                parenthese[i]='(';
            }
        }
       /* for(int i = 0; i<len; i++)
            cout<<parenthese[i]<<" ";
        cout<<endl;
        
        for(int i = 0; i<len; i++)
            cout<<flag[i]<<" ";
        cout<<endl;
        */
        int res[m];
        int j = 0;
        for(int i = 0; i<len; i++){
            if(parenthese[i]==')'){
                int tmp = 0;
                int pre = i;
                //cout<<"pre = "<<i<<endl;
                while(pre>=0){
                    if(parenthese[pre]=='('){
                        tmp++;
                        if(flag[pre]==1){
                            flag[pre]=0;
                            /*for(int i = 0; i<len; i++)
                                cout<<flag[i]<<" ";
                            cout<<endl;*/
                            break;
                        }
                    }
                    pre--;
                }
                res[j]=tmp;
                j++;
            }
        }
        for(int i = 0; i<m; i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}
