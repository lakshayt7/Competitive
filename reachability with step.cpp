#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, x, y, d, a;
    int t;
    cin>>t;
    while(t--){
    	cin>>n>>x>>y>>d;  	
		if(x%d == y%d){
			a = abs(x-y);
			a /= d;
			cout<<a<<'\n';
		}
		else if(y%d == 1){
			if(y%d!=n%d){
				a = abs(y-1);
				a /= d;
				a += abs(x-1)/d;
				cout<<a+1<<'\n';
			}
			else{
				if((abs(n-y)/d + abs(n-x) / d) < (abs(y-1)/d + abs(x-1)/d)){
					a = (abs(n-y) / d + abs(n-x) / d) + 1;
					cout<<a<<'\n';
				}
				else{
					a = (abs(1-y) / d + abs(1-x) / d) + 1;
					cout<<a<<'\n';
				}
			}
		}
		else if(y%d == n%d){
			a = abs(n-y)/d + abs(n-x) / d + 1;
			cout<<a<<'\n'; 
		}
		else
			cout<<"-1"<<'\n';
	}
}
