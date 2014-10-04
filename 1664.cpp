#include<iostream>
using namespace std;
int cnt(int m, int n){
    if(m==0||n==1)
        return 1;
    if(m<n)
        return cnt(m,m);
    else
        return cnt(m-n,n)+cnt(m,n-1);
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int i,j;
        cin>>i>>j;
        cout<<cnt(i,j)<<endl;
    }
    return 0;
}
