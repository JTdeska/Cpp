#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    int cnt=0;
    while(getline(cin,s)){
        int l=s.size();
        for(int i=0;i<l;i++){
            if(s[i]=='\"'&&cnt%2==0){
                s[i]='\`';
                cout<<'\`';
                cnt++;
            }
            if(s[i]=='\"'){
                cout<<'\'';
                s[i]='\'';
                cnt++;
            }
            cout<<s[i];
        }
        cout<<""<<endl;
    }

    return 0;
}
