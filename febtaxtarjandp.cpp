/*#pragma warning(disable:4996)//disable depriciated warning
#pragma GCC optimize ("Ofast")//may cause floating point error
#pragma comment(linker, "/stack:200000000")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize ("-ffloat-store")
These statements help with TLE
*/

#include<bits/stdc++.h>

using namespace std;

#define for(i,n)   for(ll i=0;i<(n); i ++)
#define pb push_back
#define PI 3.1415926535897932384626433832795
#define modul 1000000007

typedef long double ld;
typedef long long int ll;
typedef pair<ll,ll> pl;
typedef vector<pl> vp;

typedef vector<ll> vl;

void SCCfin(ll n ,ll u, ll disc[], ll low[], int instack[], ll comp[], stack<ll> *S, ll count[], vl (&E)[n]){
	ll depth = 0;
	depth++;
	disc[u] = depth;
	low[u] = depth;
	S->pb(u);
	instack[u] = 1;
	for(ll v = 0 ; v < count[u] ; v++){
		if(disc[E[v]] == -1){
			SCCfin(n, E[v], disc, low, instack, comp, S, count, E);
			low[u] = min(low[u] , low[E[v]]);
		}
		else if(instack[E[v]] == 1){
			low[u] = min(low[u], disc[E[v]]);
		}
	}
	if(low[u] == disc[u]){
		while(S->top()!=u){
			instack[S->top()] = -1;
			comp[S->top()] = u;
			cout<<S->top()<<' ';
			S->pop();
		}
		cout<<S->top()<<'\n';
		instack[S->top()] = -1;
		S->pop();
	}
}

void SCCmain(ll n, ll comp[], ll count[], vl E[]){
	ll *disc = new ll[n];
	ll *low = new ll[n];
	int *instack = new int[n];
	stack<ll> *S = new stack<ll>(); 
	for(i,n){disc[i] = -1;low[i] = -1; instack[i] = -1;}
	for(i, n)
		if(disc[i] == -1)
			SCCfin(n , v, disc, low, instack, comp, S, count, E);
}

int main(){
    ll t;
    cin>>t;
    while(t--){
    	ll n, m, k;
    	cin>>n>>m>>k;
    	ll B[n];
    	for(i, n)cin>>B[i];
    	vl E[n];
    	ll a, b;
    	ll *comp = new ll[n];
    	ll *count = new ll[n];
    	for(i,n){comp[i] = i; count[i] = 0;}
    	for(i,m){cin>>a>>b;E[a].pb(b);count[a]++;}
    	SCCmain(n, comp, count, E);
    }
}

