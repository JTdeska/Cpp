#include <iostream>
using namespace std;

int main(){
    int n;
    int sum;
    while(cin>>n){
        int a;
        sum=0;
        for(int i=0;i<n;i++){
            cin>>a;
            sum+=a;
        }
        if(sum/n>59)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
    return 0;
}