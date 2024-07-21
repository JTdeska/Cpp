#include <iostream>
using namespace std;

int main(){
    int n,s=0;
    cin>>n;
    while(n>0){
        if(n>=40){
            s+=100;
            n-=n;
        }else if(n>=21){
            s+=1;
            n--;
        }else if(n>=11){
            s+=2;
            n--;
        }else {
            s+=6;
            n--;
        }
    }
    cout<<s;
    return 0;
}