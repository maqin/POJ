#include<iostream>
#include <climits>
using namespace std;
#define Inf INT_MAX/2-1
int graph[101][101];
int main(){
    int n;
    while(cin>>n,n){
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++){
                graph[i][j] = Inf;
                graph[i][i]=0;
            }
        
        int p,a,b;
        for(int i =1;i<=n;i++){
            cin>>p;
            //read value to array with k times
            for(int j=1;j<=p;j++){
                cin>>a>>b;
                graph[i][a]=b;
            }
        }
        
        
        /*cout<<"-------------"<<endl;
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++)
                cout<<graph[i][j]<<" ";
            cout<<endl;
        }

        cout<<"---------------"<<endl;
         */
        //floyd
        for(int k = 1; k<=n;k++)
            for(int i = 1; i<=n; i++)
                for(int j = 1;j<=n; j++)
                    if(graph[i][j]>(graph[i][k]+graph[k][j]))
                        graph[i][j] = graph[i][k]+graph[k][j];
        
        /*for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++)
                cout<<graph[i][j]<<" ";
            cout<<endl;
        }*/
        
        int res = Inf;
        int mes = 0;
        for(int row = 1;row<=n;row++){
            int rowMax = 0;
            for(int col = 1;col<=n; col++)
                if(graph[row][col]>rowMax)
                    rowMax = graph[row][col];
            
            if(rowMax<res){
                res = rowMax;
                mes = row;
            }
        }
        
        if(res==Inf)
            cout<<"disjoint"<<endl;
        else
            cout<<mes<<" "<<res<<endl;
    }
    return 0;
}
