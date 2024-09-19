#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m,cost=0,sum=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        vector<int> v;
        int a,b,c;
        cin>>a>>b>>c;
        v.push_back(a);v.push_back(b);v.push_back(c);
        sort(v.begin(),v.end());
        if(v[2]-v[0]>=m){
            cost+=(v[0]+v[1]+v[2])/3;
            sum++;
        }
    }
        cout<<sum<<" "<<cost;
    return 0;
}