#include <bits/stdc++.h>

using namespace std;
int main(){
    string s="";
    getline(cin,s);
    int l=s.size();
    for(int i=0;i<(l/2);i++){
        if(s[i]!=s[l-1-i]){
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes";
    return 0;
}
