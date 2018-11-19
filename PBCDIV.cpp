#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	long long a,b;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
        long long dem1,dem2,dem3;
		dem1 = b/12-(a-1)/12;
		dem2 = b/30-(a-1)/30;
		dem3 = b/60-(a-1)/60;
		cout<<dem1+dem2-2*dem3<<endl;
	}
	return 0;
}
