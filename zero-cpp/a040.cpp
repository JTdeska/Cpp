#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int a(long);
int main(){
    long x,y,sum,cnt=0;
    cin>>x>>y;
    for(int i=x;i<=y;i++){
        sum=0;
        string s;
        s=to_string(i);
        for(int j=0;j<s.size();j++){
            sum+=pow((int)s[j]-48,s.size());
        }
        if(cnt==0 && sum==i){
            cout<<i;
            cnt++;
        }
        else if(sum==i){
            cout<<" "<<i;
            cnt++;
        }
    }
    if(cnt==0)
        cout<<"none";
    return 0;
}


