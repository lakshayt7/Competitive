#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n;
	cin>>n;
	if(n%4 == 0)
		cout<<0<<'\n';
	if(n%4 == 2)
		cout<<1<<'\n';
	if(n%4 == 0)
		cout<<1<<'\n';
	else
		cout<<0<<'\n';
}
