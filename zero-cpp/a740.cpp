#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    unsigned long long n,sum,cnt;
    while(cin>>n){
        sum=0;
        cnt=0;
        int j=n;
        for(int i=2;i<=floor(sqrt(j))+1;i++){
            if(n%i==0){
                while(n%i==0){
                    n/=i;
                    sum+=i;
                }
            }
        }
        if(n==1){
            cout<<sum<<endl;
        }else
            cout<<(sum+n)<<endl;
    }
    return 0;
}
