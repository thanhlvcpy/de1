#include <bits/stdc++.h>

using namespace std;
int n;
int main(){
	cin>>n;
	int a,b;
	for(int i=1;i<=n;i++){
		scanf("%lld%lld",&a,&b);	//cin
		int dem1,dem2,dem3;
		dem1 = b/12-(a-1)/12;
		dem2 = b/30-(a-1)/30;
		dem3 = b/60-(a-1)/60;
		printf("%lld\n",dem1+dem2-2*dem3);	//cout
	}
	return 0;
}
//scanf("%lld%lld",&a,&b);
//printf("%lld\n",calc(b)-calc(a-1));
