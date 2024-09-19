#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c;
    int ans1,ans2;
    int d;
    cin>>a>>b>>c;
    d=pow(b,2)-4*a*c;
    if(d<0)
        cout<<"No real root"<<endl;
    else if(d==0){
        ans1=-1*b/(2*a);
        cout<<"Two same roots x="<<ans1<<endl;
    }
    else{
        ans1=(-1*b+sqrt(d))/(2*a);
        ans2=(-1*b-sqrt(d))/(2*a);
        cout<<"Two different roots x1="<<ans1<<" , x2="<<ans2<<endl;
    }
    return 0;
}