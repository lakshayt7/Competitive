#include <iostream>

using namespace std;

int main(){
	int n, k;
	cin>>n>>k;
	long long int r = 1000000007;
	long long int A[k][n+1];
	for(int i = 0 ; i < k ; i++)
		for(int j = 0 ; j < n+1 ; j++)
			A[i][j] = 0;
	for(int i = 0 ; i < n + 1 ; i ++ )
		A[0][i] = 1;
	for(int i = 1 ; i < k ; i ++){
		for(int j = 1 ; j < n + 1 ; j++){
			for(int l = 1 ; l*j <= n ; l++){
				A[i][l*j] = (A[i][l*j] + A[i-1][j])%r;
			}
		}
	}
	long long int ans = 0;
	for(int i = 1 ; i < n + 1 ; i ++ ){
	    ans = ans + A[k-1][i];
	    ans = ans%r;
	}
	cout<<ans<<'\n';
}
