#include<iostream>
#include<string.h>
#include<cstdio>
#include<algorithm>
#define lowbit(x) (x&(-x))

using namespace std;
const int MAX = 500005;
struct data{
    int id,w;
}num[MAX];
int n, ar[MAX];

bool cmp(data a, data b){
    return a.w > b.w;
}

void add(int i){
    while(i<=n){
        ar[i]+=1;
        i += lowbit(i);
    }
}

long long sum(int i){
    long long ans = 0;
    while(i>0){
        ans += ar[i];
        i -= lowbit(i);
    }
    return ans;
}

int main(){
    int i;
    while(cin>>n,n){
        memset(ar, 0, sizeof(ar));
        for(i = 0; i < n; i ++){
            num[i].id = i + 1;
            scanf("%d", &num[i].w);
        }
        sort(num, num + n, cmp);
        long long ans = 0;
        for(i = 0; i < n; i ++){
            ans += sum(num[i].id-1);
            add(num[i].id);
        }
        printf("%llu\n", ans);
    }
    return 0;
}
