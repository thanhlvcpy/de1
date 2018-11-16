#include <bits/stdc++.h>

using namespace std;
int a,b,v;
int main(){
    cin>>a>>b>>v;
    int d=0,vt=0;
    while(vt<v){
		vt=vt+a;
		if(vt>=v){
			d++;
			break;
		}
		vt=vt-b;
		d++;
    }
    cout<<d;
}