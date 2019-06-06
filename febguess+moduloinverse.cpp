#pragma warning(disable:4996)//disable depriciated warning
#pragma GCC optimize ("Ofast")//may cause floating point error
#pragma comment(linker, "/stack:200000000")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize ("-ffloat-store")


#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

#define for(i,n)   for(ll (i) = 0;i<(n); i ++)
#define pb push_back
#define PI 3.1415926535897932384626433832795
#define modul 1000000007

typedef long double ld;
typedef pair<ll,ll> pl;
typedef vector<pl> vp;
typedef vector<ll> vl;

ll power(ll a, ll n){
	if(n==0)
		return 1;
	if(n==1)
		return a;
	ll half = power(a, n/2)%modul;
	if(n%2)
		return (((a * half)%modul) * half)%modul;
	return (half * half)%modul;
}

pl euclid(ll a, ll mod){
    pl ret;
    if( a == 0 ){
        ret.first = 0;
        ret.second = 1;
        return ret;
    }
    pl prev = euclid(mod%a, a);
    ret.first = prev.second - ((mod/a) * prev.first)%modul;
    if(ret.first < 0)
    	ret.first += modul;
    ret.second = prev.first;
    return ret;
}

ll invert(ll a, ll mod){
    pl xy = euclid(a, mod);
    ll x = xy.first;
    ll ret = ( x % mod + mod ) % mod;
    return ret;
}

int main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
    ll t;
    cin>>t;
    while(t--){
        ll n, k, m, p, q, g;
        cin>>n>>k>>m;
        if(m%2){
           q = power(n, (m+1)/2);
           p = (q - (power(n-1, (m+1)/2))%modul)%modul;
           if(p<0)
        		p+=modul;
           g = __gcd(p, q);
           p/=g;
           q/=g;
        }
        else{
           q = (power(n, (m)/2) * (n + k))%modul;
           p = (q - (power(n-1, (m)/2) * (n + k - 1))%modul)%modul;
           if(p<0)
        		p+=modul;
           g = __gcd(p, q);
           p/=g;
           q/=g;
        }
        ll x;
        x = invert(q, modul);
        ll ans = (x*p)%modul;
        cout<<ans<<'\n';
        //cout<<p<<' '<<q<<'\n';
    }
}

