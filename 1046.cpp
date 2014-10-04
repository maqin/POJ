#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int c = 16;
    
    int a[16][3];
    for(int i = 0;i<c; i++)
        
        cin>>a[i][0]>>a[i][1]>>a[i][2];
        
    

    int m, n, k;
    while(cin>>m>>n>>k,(m!=-1||n!=-1||k!=-1)){
        double low = 255*255*3;
        int v1, v2,v3;
        for(int j = 0;j<c;j++){
            double d = sqrt((m-a[j][0])*(m-a[j][0])+(n-a[j][1])*(n-a[j][1])+(k-a[j][2])*(k-a[j][2]));
            if(d<low){
                v1=a[j][0];
                v2=a[j][1];
                v3=a[j][2];
                low=d;
            }
        }
    
        cout<<"("<<m<<","<<n<<","<<k<<")"<<" maps to ("<<v1<<","<<v2<<","<<v3<<")"<<endl;
    }
    return 0;
}
