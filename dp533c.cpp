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


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, l, r;
    cin>>n>>l>>r;
    ll dp1[n+1], dp2[n+1], dp0[n+1];
    ll n1, n2, n0;
    if((r-l+1)%3 == 0){
    	n0 = n1 = n2 = (r-l+1)/3;
	}
	else if((r-l+1)%3 == 1){
		if(l%3 == 0){
			n0 = (r-l+1)/3 + 1;
			n1 = (r-l+1)/3;
			n2 = (r-l+1)/3;
		}
		else if(l%3 == 1){
			n0 = (r-l+1)/3;
			n1 = (r-l+1)/3 + 1;
			n2 = (r-l+1)/3;
		}	
		else{
			n0 = (r-l+1)/3;
			n1 = (r-l+1)/3;
			n2 = (r-l+1)/3 + 1;
		}
	}
	else{
		if(l%3 == 0){
			n0 = (r-l+1)/3 + 1;
			n1 = (r-l+1)/3 + 1;
			n2 = (r-l+1)/3;
		}
		else if(l%3 == 1){
			n0 = (r-l+1)/3;
			n1 = (r-l+1)/3 + 1;
			n2 = (r-l+1)/3 + 1;
		}	
		else{
			n0 = (r-l+1)/3 + 1;
			n1 = (r-l+1)/3;
			n2 = (r-l+1)/3 + 1;
		}
	}
    	
    dp1[1] = n1;dp2[1] = n2; dp0[1] = n0;
    for(ll i = 2 ; i <= n ; i ++ ){
    	dp1[i] = ((dp1[i-1]*n0)%modul + (dp2[i-1]*n2)%modul + (dp0[i-1]*n1)%modul)%modul;
    	dp0[i] = ((dp1[i-1]*n2)%modul + (dp2[i-1]*n1)%modul+ (dp0[i-1]*n0)%modul)%modul;
    	dp2[i] = ((dp1[i-1]*n1)%modul + (dp2[i-1]*n0)%modul + (dp0[i-1]*n2)%modul)%modul;
	}
    dp0[n] = (dp0[n] + modul)%modul;
	cout<<dp0[n];	
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
}

