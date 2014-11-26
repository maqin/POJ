#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

const int m = 100005;
const int n = 12;
struct node{
    int id;
    char ch[11];
    node *next[26];
    node(){
        id = -1;
        memset(next,0,sizeof(next));
    }
};

void insert(node *t,char s[],char a[]){
    int len = strlen(s);
    for(int i = 0; i<len; i++){
        if(!t->next[s[i]-'a'])
            t->next[s[i]-'a'] = new node();
        t = t->next[s[i]-'a'];
    }
    t->id = 1;
    strcpy(t->ch,a);
}

void search(node *t, char s[]){
    int len = strlen(s);
    for(int i = 0; i<len; i++){
        if(!t->next[s[i]-'a']){
            break;
        }
        t = t->next[s[i]-'a'];
    }
    
    if(t->id==1){
        printf("%s\n",t->ch);
    }
    else
        printf("eh\n");
}

int main(){
    char buf[n*2], a[n],b[n];
    node *trie = new node();
    while(gets(buf)){
        if(strlen(buf)==0)
           break;
        sscanf(buf,"%s %s",a,b);
        insert(trie,b,a);
    }
    while(scanf("%s",buf)!=EOF){
        search(trie,buf);
    }
    return 0;
}
