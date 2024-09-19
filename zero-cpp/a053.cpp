#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,cnt=1,score=0;
    cin>>n;
    for(int i=n;i>0;i--){
        if(cnt<=10)
            score+=6;
        else if(cnt>10 && cnt<=20)
            score+=2;
        else if(cnt>20 && cnt<40)
            score+=1;
        else
            score=100;
        cnt++;
    }
    cout<<score;
    return 0;
}
