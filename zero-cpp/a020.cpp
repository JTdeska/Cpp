#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    getline(cin,s);
    int k=0,sum=0;
    switch((char)s[0]){

        case 'A':
            k=10;
            break;
        case 'B':
            k=11;
            break;
        case 'C':
            k=12;
            break;
        case 'D':
            k=13;
            break;
        case 'E':
            k=14;
            break;
        case 'F':
            k=15;
            break;
        case 'G':
            k=16;
            break;
        case 'H':
            k=17;
            break;
        case 'I':
            k=34;
            break;
        case 'J':
            k=18;
            break;
        case 'K':
            k=19;
            break;
        case 'L':
            k=20;
            break;
        case 'M':
            k=21;
            break;
        case 'N':
            k=22;
            break;
        case 'O':
            k=35;
            break;
        case 'P':
            k=23;
            break;
        case 'Q':
            k=24;
            break;
        case 'R':
            k=25;
            break;
        case 'S':
            k=26;
            break;
        case 'T':
            k=27;
            break;
        case 'U':
            k=28;
            break;
        case 'V':
            k=29;
            break;
        case 'W':
            k=32;
            break;
        case 'X':
            k=30;
            break;
        case 'Y':
            k=31;
            break;
        case 'Z':
            k=33;
            break;
        default:
            return 0;

    }
    k=(k%10)*9+(k-k%10)/10;
    sum+=k;
    for(int i=8;i>=1;i--){
        sum+=(int)(s[9-i]-'0')*i;
    }
    sum+=s[9]-'0';
    if(sum%10==0)
        cout<<"real";
    else
        cout<<"fake";
    return 0;
}
