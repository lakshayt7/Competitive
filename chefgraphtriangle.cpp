#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long double A[n];
		long double B[n];
		for(int i = 0 ; i < n ; i ++ )
			cin>>A[i];
		for(int i = 0 ; i < n ; i ++ )
			cin>>B[i];
		int flag = 0;
		if(A[n-1] != B[0])
			flag = 1;
		if(A[n-1] == 0)
			flag =1;
		if(B[0] == 0)
			flag =1;
		if(A[0]!=0)
			flag = 1;
		if(B[n-1]!=0)
			flag = 1;
		
		
		for(int i = 1; i < n - 1 ; i ++ ){
			if(A[i] + B[i] < A[n-1])
				flag = 1;
			if(A[n-1] + B[i] < A[i])
				flag = 1;
			if(A[n-1] + A[i] < B[i])
				flag = 1;
			if(A[i] == 0)
				flag = 1;
			if(B[i] == 0)
				flag =1;
		}
		if(flag==0)
			cout<<"Yes"<<'\n';
		else
			cout<<"No"<<'\n';
	}
	
}
