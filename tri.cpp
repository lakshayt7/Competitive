#include <iostream>
#include <cmath>

using namespace std;

unsigned GCD(unsigned u, unsigned v) {
    while ( v != 0) {
        unsigned r = u % v;
        u = v;
        v = r;
    }
    return u;
}

int main(){
	long long int n, m, k;
	cin>>n>>m>>k;
	long long int a = n*m;
	if(a%k!=0){
		cout<<"NO"<<'\n';
	}
	else{
		cout<<"YES"<<'\n';
		cout<<"0 0"<<'\n';
		long long int b = GCD(n, k);
		k = k / b;
		n = n / b;
		m = m / k;
		cout<<n<<" "<<0<<'\n';
		cout<<0<<" "<<m<<'\n';
	}
}
