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
    ll t;
    cin>>t;
    ll count = 0;
    while(t--){
    	count++;
    	int flag = 0;
    	ll a;
    	cin>>a;
    	vector <string> V;
    	string s;
    	fo(i, a){
    		cin>>s;
    		V.pb(s);
		}
		int R, S, P, n;
		R = S = P = 0;
		int mark[a];
		fo(i, a)
			mark[i] = 1;
		ll ans[500];
		ll as = 0;
		int max = 0;
		fo(i, a){
			if(max < V[i].length())
				max = V[i].length();
		}
		fo(j, 500){
			R = S = P = 0;
			fo(i, a){
				if(mark[i] == 1){
					n = V[i].length();
					if(V[i][j%n] == 'R')
						R = 1;
					else if(V[i][j%n] == 'S')
						S = 1;
					else
						P = 1;
				}
			}
			if(R == 1 && S == 1 && P == 1){
				flag = -1;
				break;
			}
			else if(R == 1 && S == 1 && P == 0){
				ans[j] = 0;
				fo(i, a){
					n = V[i].length();
					if(V[i][j%n] != 'R')
						mark[i] = 0;
				}
			}
			else if(R == 1 && S == 0 && P == 1){
				ans[j] = 2;
				fo(i, a){
					n = V[i].length();
					if(V[i][j%n] != 'P')
						mark[i] = 0;
				}
			}
			else if(R == 0 && S == 1 && P == 1){
				ans[j] = 1;
				fo(i, a){
					n = V[i].length();
					if(V[i][j%n] != 'S')
						mark[i] = 0;
				}
			}
			else if(R == 1){
				ans[j] = 2;
				flag = 1;
				as = j + 1;
				break;
			}
			else if(S == 1){
				ans[j] = 0;
				flag = 1;
				as = j + 1;
				break;	
			}
			else if(P == 1){
				ans[j] = 1;
				flag = 1;
				as = j + 1;
				break;	
			}
		}
		if(flag != 1){
			cout<<"CASE #"<<count<<": "<<"IMPOSSIBLE"<<'\n';
		}
		else{
			cout<<"CASE #"<<count<<": ";
			fo(i, as){
				if(ans[i] == 0)
					cout<<"R";
				else if(ans[i] == 1)
					cout<<"S";
				else
					cout<<"P";
			}
			cout<<'\n';
		}
    }
    
}

