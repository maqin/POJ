#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n,n){
        int start=2;
        int sum=1;
        int p=2;
        while(p<=n){
            
            int cnt = start;
            while(p<=n && cnt>0){
                sum += start;
                p++;
                cnt--;
            }
            start++;
        }
        cout<<n<<" "<<sum<<endl;
    }
    return 0;
}
