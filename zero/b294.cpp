#include <iostream>

using namespace std;
int main(){
    int a,money=0;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
    cin>>arr[i];
    for(int i=1;i<=a;i++){
        money+=i*arr[i-1];
    }
    cout<<money<<endl;
    return 0;
}