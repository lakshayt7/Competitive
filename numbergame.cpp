#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long int n, a, b;
		cin>>n>>a>>b;
		long int l = a*b/__gcd(a, b);
		long long int g[n];
		long int B = 0, A = 0, com = 0;
		for(int i = 0 ; i < n ; i++ ){
			cin>>g[i];
			if(g[i]%l == 0)
				com++;
			else if(g[i]%a == 0)
				B++;
			else if(g[i]%b == 0)
				A++;	
		}
		if(com + B > A)
			cout<<"BOB"<<'\n';
		else
			cout<<"ALICE"<<'\n';
	}
}
