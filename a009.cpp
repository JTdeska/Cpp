#include <bits/stdc++.h>

using namespace std;
int main(){

    string s;
    int k=7;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        cout<<(char)(s[i]-k);
    }
    return 0;
}
