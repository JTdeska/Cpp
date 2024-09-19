#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,bigmis=0,sum,m=-1,time=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(b>m){
            time=a;
            m=b;
        }
        if(b==-1)
            bigmis++;
    }
    sum=m-n-(bigmis*2);
    sum=sum>0? sum:0;
    cout<<sum<<" "<<time;
    return 0;
}
