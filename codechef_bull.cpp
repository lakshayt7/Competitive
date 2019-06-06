#include <iostream>
#include <cmath>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	long int n, a;
	long long int l;
	while(t--){
		cin>>n;
		l = n%26;
		if(n==0)
			cout<<"1 0 0"<<'\n';
		else if(l == 0){
			a = n / 26 - 1;
			l = pow(2, a);
			cout<<"0 0 "<<l<<'\n';
		}
		else{
			a = n / 26;
			if (l < 3){
				l = pow(2, a);
				cout<<l<<" 0 0"<<'\n';
			}	
			else if (l < 11){
				l = pow(2, a);
			    cout<<"0 "<<l<<" 0"<<'\n';
			}
			else{
				l = pow(2, a);
				cout<<"0 0 "<<l<<'\n';
			}
	    }
	}
}
