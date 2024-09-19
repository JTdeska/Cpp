#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        long n;
        int ans=1;
        cin>>n;
        s=to_string(n);
        for(int j=0;j<s.size();j++){
            ans*=(int)s[j]-'0';
        }
        cout<<ans<<endl;
    }
    return 0;
}
