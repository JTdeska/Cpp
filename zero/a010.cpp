#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
void gcd(int input){
    for(int i=2;i<=input;i++){
        while(input%i==0){
            if(input%i==0){
              v.push_back(i);
              input=input/i;
            }
        }
    }
    return;
}

int main(){
    int a=0,b=0,c=0,count,all=0;
    cin>>a;
    gcd(a);
    
    for(int i=0;i<v.size();i++){
        while(c!=v[i]){
           count=1;
            c=v[i];
            for(int t=i+1;t<v.size();t++){
                if(v[i]==v[t])
                count++;
            }
            all+=count;
            if(all==v.size()){
                if(count==1)
                    cout<<b<<endl;
                else
                     cout<<b<<"^"<<count<<endl;
            }
            else{
                if(count==1)
                    cout<<b<<" * ";
                else
                    cout<<b<<"^"<<count<<" * ";
            }
            
        }
    }
    return 0;
}