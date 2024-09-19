#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;

int main(){
    int n,k,cnt=0;
    queue<int> s;
    scanf("%d",&n);
    while(n>0){
        s.push(n%10);
        n-=n%10;
        n/=10;
    }
    while(s.size()!=0){
        if(s.front()!=0||cnt!=0){
            printf("%d",s.front());
            cnt++;
        }
        s.pop();
    }
    if(cnt==0){
        printf("%d",n);
    }
    return 0;
}