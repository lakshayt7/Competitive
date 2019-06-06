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

ll dp[5000000];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll count[5000000];
    fo(i, 5000000)
    	count[i] = 0;
    memset(dp, 0, 5000000);
    ll A[n];
    fo(i, n){cin>>A[i];count[A[i]]++;dp[A[i]]++;}//SOS dp initialisation
    //SOS DP step
    fo(i, 23) fo(mask, 5000000){
		if(mask & (1<<i))
			dp[mask] += dp[mask^(1<<i)];
	}
 	fo(i, n){
 		if(dp[~A[i]] == 0)
 			cout<<"-1 ";
 		else
 			cout<<dp[~A[i]]<<' ';
	 }   
}

