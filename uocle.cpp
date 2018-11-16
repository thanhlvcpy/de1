#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long l,r;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>l>>r;
        l= sqrtl(l-1);
        r= sqrtl(r);
        cout<<r-l<<endl;
    }
    return 0;
}
