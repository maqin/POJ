#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main(){
    int c[26]={0};
    int height = 0;
    int n = 4;
    while(n--){
        string line;
        getline(cin,line);
        for(int i = 0; i<line.length(); i++)
            if(line[i]>='A'&&line[i]<='Z'){
                int v = line[i]-'A';
                c[v]++;
                if(c[v]>height)
                    height=c[v];
            }
    }
    for(int i = height; i>0; i--){
        for(int j = 0; j<26; j++){
            if(j>0)
                printf("%c",' ');
            if(c[j]==i){
                printf("%c",'*');
                c[j]--;
            }
            else
                printf("%c",' ');
        }
        printf("\n");
    }
    for(int i = 0; i<26; i++){
        if(i>0)
            printf("%c",' ');
        printf("%c",i+'A');
    }
    printf("\n");
    return 0;
}
