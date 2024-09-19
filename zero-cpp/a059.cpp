#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,k;
    int a=1,b=0,ans;
    cin>>n;
    int arr[n*2];
    vector<int> v;
    for(int i=0;i<n*2;i++){
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
    k=v[n*2-1];
    v.clear();
    while(b<=k){
        b=a*a;
        a++;
        v.push_back(b);
    }
    for(int i=0;i<n*2;i+=2){
        ans=0;
        for(int j=0;j<v.size();j++){
            if(v[j]>=arr[i] && v[j]<=arr[i+1])
                ans+=v[j];
        }
        cout<<"Case "<<((i/2)+1)<<": "<<ans<<endl;
    }
    return 0;
}
