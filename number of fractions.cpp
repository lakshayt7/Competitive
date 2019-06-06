#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v;
	int count = 0;
	int mark[1000];
	for(int i = 2 ; i < 1000 ; i++)mark[i] = 1;
	for(int i = 2 ; i < 1000 ; i++){
		if(mark[i] == 1){
			for(int j = 2 ; j*i <= 1000 ; j++){
				mark[j*i] = 0;
			}
			count++;
			v.push_back(i);
		}
	}///168primes
	bool check[1000000][168];
	for(int i = 0 ; i < 1000000 ; i ++ ){
		for(int j = 0 ; j < 168 ; j ++ ){
				check[i][j] = 0;
		}
	}
	for(int i = 0 ; i < 1000000 ; i ++ ){
		for(int j = 0 ; v[j] < sqrt(i+1) ; j ++ ){
			if(i%v[j] == 0){
				check[i][j] = 1;
			}
		}
	}
	cout<<check[3][0];
}
