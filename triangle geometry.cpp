#include<bits/stdc++.h>

using namespace std;

int main(){
	long int T;
	cin>>T;
	while(T--){
		long long int n, x, y, z;
		int t;
		cin>>n>>t>>x>>y>>z;
		long long int N, M;
		if(t==1){
			if(x-y == 1){
				if(x==z){
					M = x;
					N = 2*n + 1;	
				}
				else{
					M = 2*n + 1 - z;
					N = 2*n + 1;
				}
			}
			else{
				if(x == z){
					M = x;
					N = 2*n + 1;
				}
				else{
					M = 2*n + 1 - z;
					N = 2*n + 1;
				}
			}
		}
		else if(t == 2){
			if(x == z){
				M = 0;
				N = 2*n + 1;
			}
			else{
				M = 2*n + 1 - 2*y;
				N = 2*n + 1;
			}
		}
		else if(t == 3){
			if(x-y == 1){
				if(x==z){
					M = x;
					N = 2*n + 1;	
				}
				else{
					M = 2*n + 1 - x;
					N = 2*n + 1;
				}
			}
			else{
				if(x == z){
					M = x;
					N = 2*n + 1;
				}
				else{
					M = 2*n + 1 - x;
					N = 2*n + 1;
				}
			}
		}
		else{
			if(x == z){
				M = 0;
				N = 2*n + 1;
			}
			else{
				M = 2*n + 1 - 2*y;
				N = 2*n + 1;
			}	
		}
		long long int G = __gcd(M, N);
		M /= G;
		N /= G; 
		cout<<M<<' '<<N<<'\n';
	}
}
