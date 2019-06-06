#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	vector < pair < int, int > > v;
	int x, y;
	for(int i = 0 ; i < 2 * m ; i++){
		cin>>x>>y;
		v.push_back({x, y});
	}
	long long int A[n][n];
	for(int i = 0 ; i < n ; i ++ )
		for(int j = 0 ; j < n ; j ++ )
			cin>>A[i][j];
	sort(v.begin(), v.end());
	int count = 1;
	while(v[count].first == v[0].first){
		count++;
	}
	if(count%2 == 0){
		int i = 0;
		while(count > 0){
			cout<<v[i+1].second<<' '<<v[i].second<<'\n';
			cout<<v[i+1].second - v[i].second + 1<<' ';
			for(int j = v[i].second ; j<=v[i+1].second ; j++){
				cout<<v[i].first<<' '<<j<<' ';	
			}
			cout<<'\n';
			count -= 2;
			i+=2;
		}
	}
}

