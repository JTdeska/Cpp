#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,target=-1,lead,cnt=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]!=-1){
            target=arr[i];
            lead=i;
            arr[i]=-1;
            if(lead==target)
                cnt++;
            while(lead!=target){
                int j=target;
                target=arr[target];
                arr[j]=-1;
                if(target==lead){
                    cnt++;
                    break;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
