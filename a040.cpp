#include <iostream>
using namespace std;

int main(){
    int a,b;
    vector<int> v;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        for(int j=10;j<=i;j*10){
            v.push_back((i%j)/(j/10));
        }
        for(int k=0;k<v.size();k++)
            v.erase(v.begin()+v.size());
    }
    return 0;
}