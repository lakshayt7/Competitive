#include<bits/stdc++.h>

using namespace std;

int main(){
	long int n;
	long long int k, res ,fin;
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n>>k;
	long long int A[n], B[n];
	for(int i = 0; i < n; i ++ )
		cin>>A[i];
	vector< pair < long long int , pair < long long int, long long int > > > V;
	for(int i = 0; i < n; i ++ ){
		cin>>B[i];
		res = B[i]/A[i];
		fin = B[i] - res * A[i];
		V.push_back({res, {fin, A[i]}});
	}
	sort(V.begin(), V.begin() + n);
	/*for(int i = 0 ; i < n ; i ++ )
		cout<<V[i].first<<' '<<V[i].second.first<<' '<<V[i].second.second<<' ';
	cout<<'\n';*/
	res = V[0].first;
	long long int ans = 0, cur = V[0].first, ind = 1;
	k-=V[0].second.second - V[0].second.first;
	while(k>=0 && ind < n){
		if(ans!=0){
			k-=res;
		}
		while(cur==V[ind].first){
			res+=V[ind].second.second;
			ind++;
			k-=V[ind].second.second-V[ind].second.first;
		//	cout<<"k = "<<k<<'\n';
		}
		cout<<ind;
		cur = V[ind].first;
		if(k > 0)
			ans++;
	}
	if(k > 0){
		ans+=k/res;
	}
	cout<<ans + V[0].first;
}
