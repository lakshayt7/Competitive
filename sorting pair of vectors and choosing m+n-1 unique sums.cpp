#include <bits/stdc++.h>

using namespace std;

int main(){
	long int n, m;
	cin>>n>>m;
	long long int A[n], B[m];
	for(int i = 0 ; i < n ;i ++)
		cin>>A[i];
	for(int i = 0 ; i < m ; i++)
		cin>>B[i];
	vector < pair <long long int, long int > > v1, v2;
	for(long int i = 0 ; i < n ; i ++ )
		v1.push_back({A[i], i});
	for(long int i = 0 ; i < m ; i ++ )
		v2.push_back({B[i], i});
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	for(int i = 0 ; i < m ; i++){
		cout<<v1[0].second<<' '<<v2[i].second<<'\n';
	}
	for(int i = 1 ; i < n ; i++){
		cout<<v1[i].second<<' '<<v2[m-1].second<<'\n';
	}
}
