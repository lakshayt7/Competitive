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


ll out(ll n, ll m){
	if(n==0)
		return 0;
	if(m == 0 || m == 1)
		return 1;
	/*if((n-1)%3!=0){
		//cout<<1;
		if((n-1)/3 >= m)
			return m;
		if(m <= n-(n-1)/3){
			return (n-1)/3;
		}
		else{
			return n-m;
		}
	}
	else{*/
	if(n-m>m)
		return m;
	return n - m;
	//}

}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin>>n>>m;
    cout<<out(n, m);
    
}

