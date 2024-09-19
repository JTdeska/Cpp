#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    int ans[6];
    getline(cin,s);
    for(int i=0;i<6;i++){
        ans[i]=s[i]-s[i+1];
        ans[i]=ans[i]>0?ans[i]:-(ans[i]);
        cout<<ans[i];
    }
    return 0;
}
