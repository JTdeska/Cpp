#include <iostream>

using namespace std;
int main(){
    int i,j,t,l;
    cin>>l;
    int buf[l];
    for(int h=0;h<l;h++)
    {
        cin>>buf[h];
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<i; j++)
      {
          if(buf[i] < buf[j])
           {
               t=buf[i];
               buf[i]=buf[j];
               buf[j]=t;
           }
      }
    }
    for(int h=0;h<5;h++)
        cout<<buf[h]<<endl;
}