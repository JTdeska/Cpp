#include <iostream>

using namespace std;
int main(){
    int a,l;
    cin>>a;
    l=a
    for(int i=2;i<a;i++){
        int t;
            while(l%i==0){
                t++;
                l=l%i;
            }
    }
    return 0;
}