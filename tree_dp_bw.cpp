#pragma warning(disable:4996)//disable depriciated warning
#pragma GCC optimize ("Ofast")//may cause floating point error
#pragma comment(linker, "/stack:200000000")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize ("-ffloat-store")

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

int n;
vl E[100005];
int ty[100005];
ll dp[100005][2];
int col[100005];

void dfs(int u){
	col[u] = 1;
	if(ty[u] == 1){dp[u][0] = 0;dp[u][1] = 1;}
	else{dp[u][0] = 1;dp[u][1] = 0;}
	for(auto v : E[u]){
		if(col[v] == 0 && v!= u){
			dfs(v);
			if(ty[u] == 0){
				dp[u][1] = ((dp[u][0]*dp[v][1])%modul + (dp[u][1] * ((dp[v][0] + dp[v][1])%modul))%modul)%modul; 
				dp[u][0] *= ((dp[v][0]+ dp[v][1])%modul); 
				dp[u][0] %=modul;
			}
			else
				dp[u][1] *= ((dp[v][0]+ dp[v][1]))%modul;
				dp[u][1] %= modul;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   cin>>n;
   int p;
   fo(i, n-1){
    	cin>>p;
    	E[i+1].pb(p);
    	E[p].pb(i+1);
	}
   fo(i, n){cin>>ty[i];col[i] = 0;}
	dfs(0);	
	cout<<dp[0][1];
}

