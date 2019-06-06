#include<bits/stdc++.h>

using namespace std;

int main(){
	int q;
	cin>>q;
	long long int l1, l2, r1, r2;
	while(q--){
		cin>>l1>>r1>>l2>>r2;
		if(l1!=l2)
			cout<<l1<<' '<<l2<<'\n';
		else
			cout<<l1<<' '<<r2<<'\n';
	}
}
