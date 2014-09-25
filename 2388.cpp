#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int milk[n];
    for(int i = 0;i<n;i++)
        cin>>milk[i];
    sort(milk,milk+n);
    cout<<milk[n/2]<<endl;
    return 0;
}
