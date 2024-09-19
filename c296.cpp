#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,m1,m2,k,lucky;
    cin>>n>>m1>>k;
    vector<int> v;
    for(int i=1;i<n+1;i++)
        v.push_back(i);
    for(int i=0;i<k;i++){
        m2=m1 % v.size();
        v.erase(v.begin()+(m2-1));
    }
    lucky=v[m1];
    cout<<lucky<<endl;
    return 0;
}