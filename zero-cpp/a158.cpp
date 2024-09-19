#include <iostream>
using namespace std;

int main(){
    int n,a=0,b=0,c=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        if(j%3==0)
            a++;
        else if(j%3==1)
            b++;
        else
            c++;
    }
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}