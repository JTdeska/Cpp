#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int length,A=101,B,C;
    cin>>length;
    int a[length];
    int b[length];  
    for(int i=0;i<length;i++ )
        cin>>a[i];
    for(int k=0;k<length;k++ ){
        for(int i=0;i<length;i++ ){
            if(a[i]<A){
                B=a[i];
                C=i;
            }
        }
        b[k]=B;

    }
    for(int i=0;i<length;i++ )
        cout<<b[i]<<endl;
    return 0;
}