#include <bits/stdc++.h>

using namespace std;
int main(){
    int m,d,s;
    cin>>m>>d;
    s=(m*2+d)%3;
    switch(s){
        case 0:
            cout<<"´¶³q";
            break;
        case 1:
            cout<<"¦N";
            break;
        case 2:
            cout<<"¤j¦N";
            break;

    }
    return 0;
}
