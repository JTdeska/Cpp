#include <bits/stdc++.h>
#define int long

using namespace std;
signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int brr[arr[n-1]]={0};
    for(int i=0;i<k;i++){
        int j;
        cin>>j;
        int ans=-1,l=1,r=n,mid=(l+r)/2;
        if(brr[j-1]!=0 && j<=arr[n-1] && j>0){
            ans=brr[j-1];
        }else{
            while(true){
                mid=(l+r)/2;
                brr[arr[mid]-1]=mid;
                if(arr[mid]<j){
                    l=mid+1;
                }else if(arr[mid]==j){
                    ans=mid;
                    break;
                }else{
                    r=mid-1;
                }
                if(mid<=1 || mid>=n-1)
                    break;
                if(arr[mid-1]<j && arr[mid+1]>j)
                    break;
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}


