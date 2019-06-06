#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long int n, k ;
		cin>>n>>k;
		int X[n];
		int Y[n];
		for(int i= 0 ; i < n ; i ++){
			X[i] =0;Y[i] = 0;
		}
		//vector<long int, long int > v;
		long int r , c;
		for(int i = 0 ; i < k ; i ++ ){		
			cin>>r>>c;
			//v.push_back({r, c});
			X[r-1] = 1;
			Y[c-1] = 1;
		}
		long int ans = n - k ;
		cout<<ans<<' ';
		long int i = 0 , j = 0;
		while(ans--){
			while(X[i] == 1)
				i++;
			while(Y[j] == 1)
				j++;
			cout<<i+1<<' '<<j+1<<' ';
			i++;j++;
		}
		cout<<'\n';
	}
	
}
