#include <bits/stdc++.h>

using namespace std;
int n;
int main(){
	cin>>n;
	int a,b;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		int dem1,dem2,dem3;
		dem1 = b/12-a/12;
		dem2 = b/30-a/30;
		dem3 = b/60-a/60;
		cout<<dem1+dem2-dem3<<endl;
	}
	return 0;
}
