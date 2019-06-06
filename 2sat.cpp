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

ll S[1000000000];
ll top = -1;
const ll n;

vl E[n];
vl E1[n];
void dfs1(ll u, ll colour[]){
	colour[u] = 1;
	for(auto v : E[u]){
		if(colour[v] == 0 && v!= u){
			dfs1(v, colour);
		}
	}
	top++;
	S[top] = u;
}

void dfs2(ll u, ll colour[], ll counter, ll comp[]){
	colour[u] = 1;
	for(auto v : E[u]){
		if(colour[v] == 0 && v!= u){
			dfs1(v, colour);
		}
	}	
	comp[u] = counter;
}

ll inv(ll a, ll n){
	if(a>=n)
		return a-n;
	return a+n;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    ll q;cin>>q;
    ll x[n]; ll y[n];
	fo(i, q){
		cin>>x[i]>>y[i];
    	E[inv(x[i], n)].pb(y[i]);
    	E[inv(y[i], n)].pb(x[i]);
    	E1[x[i]].pb(inv(y[i]));
    	E1[y[i]].pb(inv(x[i]));
	}
	ll colour[2*n];
	ll comp[2*n];
	memset(colour, 0, 2*n);
	fo(i, n){
		if(!colour[x[i]]){
			dfs1(x[i], colour);
		}
		if(!colour[y[i]]){
			dfs1(y[i], colour);
		}
		if(!colour[inv(x[i])]){
			dfs1(inv(x[i]), colour);
		}
		if(!colour[inv(y[i])]){
			dfs1(inv(y[i]), colour);
		}	
	}
	memset(colour, 0, 2*n);
	ll counter = 0;
	ll v;
	while(top>=0){
		v = S[top];
		top--;
		if(!colour[v]){
			counter++;
			dfs2(v);
		}
	}
	bool sat = 1;
	fo(i, n){
		if(comp[x[i]]==comp[inv(x[i])])
			sat = 0;
		if(comp[y[i]] == comp[inv(x[i])])
			sat = 0;
	}
	fo(i, 2*n)
		cout<<comp[i];
	cout<<sat;
}

