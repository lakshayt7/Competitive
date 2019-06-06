/*#pragma warning(disable:4996)//disable depriciated warning
#pragma GCC optimize ("Ofast")//may cause floating point error
#pragma comment(linker, "/stack:200000000")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize ("-ffloat-store")
These statements help with TLE
*/

#include<bits/stdc++.h>

using namespace std;

#define fo(i,n)   for(int i=0;i<(n); i ++)
#define pb push_back
#define PI 3.1415926535897932384626433832795
#define modul 1000000007

typedef long double ld;
typedef long long int ll;
typedef pair<ll,ll> pl;
typedef vector<pl> vp;
typedef vector<ll> vl;

/*
const ll n;
vl E[n];
ll dp[n];
void dfs(ll u){
	col[u] = 1;
	for(auto v : E[u]){
		if(col[v] == 0 && v!= u){

		}
	}
}*/

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll A[n];
    fo(i, n){
    	cin>>A[i];
	}
	ll ans = A[n-1];
	ll prev = A[n-1];
	fo(i, n-1){
		if(A[n-2-i]>=prev){
			if(prev>0)
				prev--;
			ans += prev;
		}
		else{
			prev = A[n-2-i];
			ans += prev;
		}
	//	cout<<prev<<' ';
	}
	cout<<ans;
    /*ll t;
    cin>>t;
    while(t--){
    }
    ll a, b;
	fo(i, n){
    	cin>>a>>b;
    	E[i+1].pb(p);
    	E[p].pb(i+1);
	}
	*/
}

