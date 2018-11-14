#include <bits/stdc++.h>

using namespace std;
int g;
long long y;
int main()
{
    freopen("bai1.inp","r",stdin);
    freopen("bai1.out","w",stdout);
    cin>>g>>y;
    int k = g+y;
    int n,m;
    for(m=1;m<=g;m++){
        n = k/m;
        if((m+n-2)*2==g && k%m==0){
           break;
       }
    }
    cout<<m<<" "<<n;
    return 0;
}
