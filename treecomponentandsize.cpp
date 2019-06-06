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


ll modul = 1000000007;

ll n;
vl E[100005];
int col[100005];
ll comp[100005];
vl V;
ll as = 0;;
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
}

ll power(ll a, ll n){
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
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll k;
   cin>>n>>k;
   ll a, b, r;
   fo(i, n-1){
    	cin>>a>>b>>r;
    	if(!r){
	    	E[a-1].pb(b-1);
	    	E[b-1].pb(a-1);
		}
	}
   memset(col, 0, n);
   fo(i, n){
   		if(col[i]==0){
   			dfs(i);
   			//cout<<'\n';
   			counter++;
   			//cout<<"size = "<<size<<'\n';
   			V.pb(size);
   			as++;
   			size = 0;
   		}
	}
	/*for(auto i:V)
		cout<<i<<' ';*/
	/*fo(i, n)
		cout<<comp[i];*/
	ll ans = power(n, k) ;
	fo(i, as){
		//cout<<V[i]<<' ';
		ans  = (ans - power(V[i], k))%modul;
		ans = (ans )%modul;
		if(ans<0)
			ans+=modul;
	}		
	//cout<<'\n';
	cout<<ans;
}

