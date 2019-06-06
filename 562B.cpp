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
/*ll bsearch(ll A[], ll l, ll r, ll k) {
    ll m;
    while( l <= r ) {
        m = l + (r-l)/2;
		if(A[m] == k){
			while(A[m] == k)
				m++;
			return m - 1;
		}
        if(r - l < 2){
            if(A[r] == k)
            	return r;
            if(A[l] == k)
            	return l;
            if(A[l] > k)
            	return l - 1;
            if(A[r] > k)
            	return l;
            return r;
		}
		if( A[m] < k )
        	l = m + 1;
    	else
        	r = m - 1;
	}
	return -1;
}*/

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin>>n>>m;
    ll x[m], y[m];
    ll X, Y;

    fo(i, m){
    	cin>>x[i]>>y[i];
	}
	X = x[0];
	ll ind = -1, indi = -1;
	int flag = 0;
	fo(i, m){
		if(x[i] != X && y[i] != X){
			ind = i;
			Y = x[i];
			break;
		}	
	}
	if(ind == -1)
		flag = 1;
	if(flag == 0 ){
		for(ll i = ind ; i < m ; i ++ ){
			if(x[i] != X && y[i] != X && y[i] != Y && x[i] != Y){
				indi = i;
				break;
			}	
		}
		if(indi == -1){
			flag = 1;
		}
	}
	if(flag == 0){
		Y = y[ind];
		indi = -1;
		for(ll i = ind ; i < m ; i ++ ){
			if(x[i] != X && y[i] != X && y[i] != Y && x[i] != Y){
				indi = i;
				break;
			}	
		}
		if(indi == -1){
			flag = 1;
		}
	}
	if(flag == 0){
		X = y[0];
		ind = -1;
		indi = -1;
		fo(i, m){
		if(x[i] != X && y[i] != X){
			ind = i;
			Y = x[i];
			break;
		}	
	}
	if(ind == -1)
		flag = 1;
		if(flag == 0 ){
			for(ll i = ind ; i < m ; i ++ ){
				if(x[i] != X && y[i] != X && y[i] != Y && x[i] != Y){
					indi = i;
					break;
				}	
			}
			if(indi == -1){
				flag = 1;
			}
		}
		if(flag == 0){
			Y = y[ind];
			indi = -1;
			for(ll i = ind ; i < m ; i ++ ){
				if(x[i] != X && y[i] != X && y[i] != Y && x[i] != Y){
					indi = i;
					break;
				}	
			}
			if(indi == -1){
				flag = 1;
			}
		}
	}
	
	if(flag == 0)
		cout<<"NO";
	else{
		cout<<"YES";
	}	
}

