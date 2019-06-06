#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int A[n];
	for(int i = 0 ; i < n ; i ++){
		cin>>A[i];
	}
	sort(A, A+n);
		if(A[n-1] == A[n-2]){
			cout<<A[n-1]<<' '<<A[n-2]<<'\n';
		}
		else{
			int ans = 0;
			for(int i = n-2 ; i >=0 ; i -- ){
				if(A[n-1]%A[i] != 0 || A[i] == A[i-1]){
					ans = i;
					break;
				}
			}
			cout<<A[n-1]<<' '<<A[ans]<<'\n';
		}
}
