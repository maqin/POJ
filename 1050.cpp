#include<iostream>
#include<climits.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n][n];
    for(int i =0;i<n;i++)
        for(int j =0;j<n; j++)
            cin>>array[i][j];
    int t =INT_MIN;
    for(int i = 0;i<n; i++){
        int res[n];
        for(int k=0;k<n; k++)
            res[k]=array[i][k];
        for(int j=i; j<n; j++){
            if(j!=i){
                for(int m =0;m<n; m++)
                    res[m]+=array[j][m];
            }
            int b = 0;
            for(int p=0;p<n;p++){
                if(b<0)
                    b=0;
                b+=res[p];
                t=max(t,b);
            }
        }
        
    }
    cout<<t<<endl;
    return 0;
}
