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

ll colour[100008];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    fo(i, 100008)
    	colour[i] = 0;
    ll A[n];
    ll max = 0;
    ll maxind[n];
    ll maxi;
    fo(i, n){
    	cin>>A[i];
    	colour[A[i]]++;
    	
	}
    ll min = 10000000;
    ll num = 0;
    for(i, 100008){
    	if(min > colour[i]){
    		min = A[i];
    		num = 1;
    	}
    	if(min == colour[i])
    		num++;
    	if(max<colour[i])
    		max = colour[i];
	}
	int mark[n];
	fo(i, n)
		mark[i] = 0;
	fo(i, n){
		colour[A[n-1-i]]--;
		if(min == colour[A[n-1-i]])
			num++;
		else if(min > colour[A[n-1-i]]){
			min = colour[A[n-1-i]];
			num = 1;
		}
		
			
	}
    
}

