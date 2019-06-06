#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	long long size = pow(2, n);
	long long size1 = size*2-1;
	long long int A[size + 1];
	for(int i = 1 ; i <= size ; i ++ )cin>>A[i];
	long long int B[size1 + 1];
	for(int i = 0 ; i <= size1 + 1; i ++ )
		B[i] = 0;
	for(int i = 1 ; i <= size ; i ++ ){
		 B[size1 - size + i] = A[i];
	}
	size1-=size;
	for(int i = 0 ; i < n  ; i ++ ){
		if(i%2==0){
			size/=2;
			size1-=size;
			for(int i = 1 ; i <= size ; i ++ ){
				B[size1 + i] = B[(size1+i)*2]|B[(size1+i)*2 + 1];
			}
		}
		else{
			size/=2;
			size1-=size;
			for(int i = 1 ; i <= size ; i ++ ){
				B[size1 + i] = B[(size1+i)*2]^B[(size1+i)*2 + 1];
			}
		}
	}
	long long int rep, indi, prev;
	size = pow(2, n);
	size1 = size*2-1;
	for(int i =0 ; i < m ; i ++ ){
		cin>>indi>>rep;
		prev = A[indi];
		B[size1 - size + indi] = rep;
		int k = 0;
		int cur = size1 - size + indi;
		while(k <= n-1){
			if(k%2==0){
				if(cur%2==0)
					B[cur/2] = B[cur+1]|B[cur];
				else
					B[cur/2] = B[cur-1]|B[cur];	
			}
			if(k%2==1){
				if(cur%2==0){
					B[cur/2] = B[cur+1]^B[cur];
					//cout<<"cur="<<' '<<cur<<'\n';
				}
				else{
					B[cur/2] = B[cur-1]^B[cur];	
					int ans = 7^5;
					cout<<"ans="<<' '<<ans<<'\n';
				}
			}
			k++;
			cur/=2;
			for(int i = 1 ; i < size1+1 ;i ++ ){
				cout<<B[i]<<' ';	
			}
			cout<<'\n';
		}
		cout<<B[1]<<'\n';
		B[size1 - size + indi] = prev;
		k = 0;
		cur = size1 - size + indi;
		while(k <= n-1){
			if(k%2==0){
				if(cur%2==0)
					B[cur/2] = B[cur+1]|B[cur];
				else
					B[cur/2] = B[cur-1]|B[cur];	
			}
			if(k%2==1){
				if(cur%2==0)
					B[cur/2] = B[cur+1]^B[cur];
				else
					B[cur/2] = B[cur-1]^B[cur];	
			}
			k++;
			cur/=2;
		}
	}
}
