#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n,k;
    long j=0,money=0;
    cin>>n>>k;
    int arr[n];
    vector<int> v;
    vector<long> v2;
    vector<int> v3;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    for(int i=0;i<v.size();i++)
        v3.push_back(v[i]); 
    sort(v.begin(),v.end());
    for(int i=0;i<k;i++){
        int o=0;
        for(int t=0;t<v3.size();t++){
            if(v[i]==v3[t] && v[i]<0 && o==0){
                v3.erase(v3.begin()+t);
                o=1;
            }
        }
    }
    for(int i=0;i<v3.size();i++){
        money+=v3[i];
        v2.push_back(money);
    }
    for(int i=0;i<v2.size();i++){
        if(j<v2[i])
            j=v2[i];
    }
    cout<<j<<endl;
    return 0;
}