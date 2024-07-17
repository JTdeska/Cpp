#include <iostream>

using namespace std;
int main(){
    int i;
    cin>>i;
    for(int t=0;t<i;t++){
      int a,b,c,d,ans;
       cin>>a>>b>>c>>d;
       if((b-a)==(c-b))
           ans=d+(b-a);
       else
            ans=d*(b/a);
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<ans<<endl;
    }
    return 0;
}