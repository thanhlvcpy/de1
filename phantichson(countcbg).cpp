#include <bits/stdc++.h>

using namespace std;
int n;
int main(){
	while(cin>>n){
		int kq=0;
		for(int i=2;i<=trunc(sqrt(2*n));i++)
			if((2*n)%i==0){
				int k=(2*n)/i +i-1;
				if(k %2 ==0)
					kq++;
			}
		cout<<kq<<endl;

	}
	return 0;
}
