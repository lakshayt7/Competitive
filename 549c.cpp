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



ll n;
vl E[100005];
int col[100005];
ll counter[100005];
ll parent[100005];
int acol[100005];
ll size = 0;
queue <ll> q; 
queue <ll> q1;
void bfs(ll u){
	q.pop();
	cout<<u<<' ';
	col[u] = 1;
	int flag = 0;
	for(auto v : E[u]){
		if(col[v] == 0 && v!= u){
			if(acol[v] == 1)
				flag = 1;
			
		}
	}
	//if(flag == 1 || acol[u] == 1){
		for(auto v : E[u]){
			if(col[v] == 0 && v!= u){
				q.push(v);
			}
		}
		while(!q.empty()){
			bfs(q.front());
		}	
	//}
	/*else{
		cout<<u<<' ';
		for(auto v : E[u]){
			if(col[v] == 0 && v!= u){
				if(parent[u]!=-1){
					E[parent[u]].pb(v);
					parent[v] = parent[u];
				}
				else{
					q.push(v);
				}
			}
		}
		if(parent[u]!=-1)
			bfs(u);
		else{
			bfs(q.front());
		}
	}*/
	
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b;
    ll root, n;
    cin>>n;
	fo(i, n){
    	cin>>a>>b;
    	if(a==-1){
    		root = i;
    		parent[i] = -1;
    	}
    	else{
    		E[a].pb(i);
    		parent[i] = a;
    	}
    	acol[i] = b;
	}
	memset(col, 0, n);
	bfs(root);

}

