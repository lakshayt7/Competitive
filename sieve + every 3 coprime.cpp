#include<bits/stdc++.h>

using namespace std;

long long int N;

int main(){
	//the SIEVE
	vector<int> v;
	vector<int> V;
	int count = 0;
	int mark[3000];
	int mark1[104730];
	for(int i = 2 ; i < 3000 ; i++)mark[i] = 1;
	for(int i = 2 ; i < 104730 ; i++)mark1[i] = 1;
	for(int i = 2 ; i < 3000 ; i++){
		if(mark[i] == 1){
			for(int j = 2 ; j*i <= 3000 ; j++){
				mark[j*i] = 0;
			}
			count++;
			v.push_back(i);
			if(count>=400)
				break;
		}
	}
	count = 0;
	for(int i = 2 ; i < 104730 ; i++){
		if(mark1[i] == 1){
			for(int j = 2 ; j*i <= 104730 ; j++){
				mark1[j*i] = 0;
			}
			count++;
			V.push_back(i);
			if(count>=3333)
				break;
		}
	}
	//end of the SIEVE
	int mark2[400][400];int fin[400];int B[50000];
	for(int i = 0 ; i < 400 ; i++)
		for(int j = 0 ; j < 400 ; j++)
			mark2[i][j] = 0;
	for(int i = 0 ; i < 400 ; i++){
		mark2[i][i] = 1;fin[i] = 0;
	}
	
	int P = 4663;
	long long int A[50000];
	int counter[400];
	for(int i = 0  ; i < 400 ; i ++ )
		counter[i] = 0;
	int c = 0;
	for(long int i = 0 ; i < 50000 ; i++){
		int flag = 0;
		for(int k = 0 ; k < 400 ; k++){
			if(mark2[c][k] == 0 && counter[k] < 398){
				mark2[c][k] = 1;
				mark2[k][c] = 1;
				counter[c] = counter[c] + 1;
				counter[k] = counter[k] + 1;
				//cout<<c<<' '<<k<<'\n';
				A[i] = v[c] * v[k];
				B[i] = k;
				c = k;
				flag = 1;
				break;	
			}
		}
	}
	/*for(int i = 0 ; i < 49998 ; i++){
		if(__gcd(__gcd(A[i], A[i+1]), __gcd(A[i+1], A[i+2])) != 1)
			cout<<i<<'\n';
	}
	for(int i = 0 ; i < 49999 ; i++){
		if(__gcd(A[i], A[i+1]) == 1	)
			cout<<i<<'\n';
	}*/
	int t;
	cin>>t;
	while(t--){
		long int n;
		cin>>n;
		if(n > 3333){
			for(int i = 0 ; i < n-2 ; i++)
				cout<<A[i]<<' ';ss
			long long int z = v[B[n-3]] * P;
			cout<<z<<' ';
			z = P*2;
			cout<<z<<'\n';
		}
		else{
			for(int i = 0 ; i < n-2 ; i++){
				long long int answe = V[i] * V[i+1];
				cout<<answe<<' ';
			}
			cout<<V[n-1] * V[n-2]<<' ';
			cout<<2 * V[n-1] << '\n';
		}
	}
}
