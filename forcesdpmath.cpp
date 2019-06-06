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

/*ll mpow(ll a, ll n){
	if(n==0)return 1;
	if(n==1)
		return a%modul;
	if(n%2){
		ll q = power(a, n/2);
		q%=modul;
		ll ans = (q*q)%modul;
		return (ans*a)%modul;
	}
	else{
		ll q = power(a, n/2);
		q%=modul;
		return (q*q)%modul;
	}
}*/


/*
ll n;
vl E[100005];
int col[100005];
ll comp[100005];
ll counter = 0;
ll size = 0;
void dfs(ll u){
	//cout<<u<<' ';
	size++;
	col[u] = 1;
	comp[u] = counter;
	for(auto v : E[u]){
		if(col[v] == 0 && v!= u){
			dfs(v);
		}
	}
}*/

ll MOD = 998244353;

ll mfact(ll n){
	if(n == 1)
		return 1;
	return (mfact(n-1) * (n)%MOD)%MOD;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
	memset(col, 0, n);
	fo(i, n){
		if(col[i]==0){
  			dfs(i);
   			//counter++;
   			size = 0;
   		}
	}
	*/
	ll n;
	cin>>n;
	ll dp[n+1];
	dp[0] = 0;
	for(int i =1 ; i < n+1 ; i++)
		dp[i] = ((dp[i-1]*i)%MOD + 1)%MOD;
	dp[n] = (dp[n] + MOD)%MOD;
	//cout<<dp[n]<<'\n';
	ll ans = ((((n*mfact(n))%MOD + 1)%MOD - dp[n])%MOD + MOD)%MOD;
	cout<<ans;
	
}

