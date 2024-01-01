#include <iostream>
#include <string>
using namespace std;
void p(int *ans){
	cout<<ans<<endl;
	return;
}
int main(){
	string str;
	int ans1;
	cin>>str>>ans1;
	p(ans1)	;
    return 0;
}

