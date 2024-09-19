#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int to_num(char);
string to_rom(int);
int main(){
    while(true){
        string s;
        int a=0,b=0,i=0;

        getline(cin,s);
        if(s[0]=='#')
            break;

        for(i=0;i<s.size();i++){
            if(s[i]==' '){
                i++;
                break;
            }
            if(to_num(s[i])>=to_num(s[i+1])){
                a+=to_num(s[i]);
            }else{
                a+=to_num(s[i+1])-to_num(s[i]);
                i++;
            }
            if(s[i+1]==' '){
                i+=2;
                break;
            }
        }
        cout<<a<<endl;


        for(i=i;i<s.size();i++){
            if(i==s.size()-1){
               b+=to_num(s[i]);
               break;
            }
            if(to_num(s[i])>=to_num(s[i+1])){
                b+=to_num(s[i]);
            }else if(to_num(s[i])<to_num(s[i+1])){
                b+=to_num(s[i+1])-to_num(s[i]);
                i++;
            }
        }
        cout<<b<<endl;

    }
    return 0;
}
int to_num(char c){
        switch(c){
            case 'M':
                return 1000;
            case 'D':
                return 500;
            case 'C':
                return 100;
            case 'L':
                return 50;
            case 'X':
                return 10;
            case 'V':
                return 5;
            case 'I':
                return 1;
        }
        return -1;
}
