#include <bits/stdc++.h>
#define MAX 30000
using namespace std;
int main(){
    int a,m=1;
    long f[MAX]={0};
    long g[MAX]={0};
    f[1]=1;
    g[1]=1;
    while(cin>>a){
        if(a>m){
            for(int i=m+1;i<=a;i++){
                f[i]=i+f[i-1];
                g[i]=f[i]+g[i-1];
            }
        }
        cout<<f[a]<<" "<<g[a]<<endl;
    }
    return 0;
}
