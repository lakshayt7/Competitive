#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	long long int a, b;
	vector < pair < long long int, long long int > > v;
	for(int i = 0 ; i < n ; i ++){
		cin>>a>>b;
		v.push_back({a, b});
	}
	sort(v.begin(), v.end());
	long long int day = v[0].second;
	for(int i = 1 ; i < n ; i++){
		if(v[i].first!=v[i-1].first){
			if(v[i].second >= day){
				day = v[i].second;
			}
			else{
				day = v[i].first;
			}
		}
		else{
			if(day != v[i].first){
				day = max(v[i].second, day);	
			}
		}
	}
	cout<<day<<'\n';	
}


