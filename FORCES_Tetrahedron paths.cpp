#include<iostream>
#include <ctime>
using namespace std;

int main(){
	long long int n;
	long long int r = 1000000007;
	cin>>n;
	int start_s=clock();
	long long int A[n], B[n];
	A[0] = 0;
	B[0] = 1;
	for(int i = 1 ; i < n ; i ++ ){
		A[i] = (3 * B[i-1]) % r;
		B[i] = ( A[i-1] + (2 * B[i-1]) % r );
	}
	cout<<A[n-1]<<'\n';
	int stop_s=clock();
	//cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;

	
}
