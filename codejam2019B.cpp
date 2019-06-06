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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    string s1, s2;
    ll n = 0;
    while(t--){
    	n++;
    	cout<<"Case #"<<n<<": ";
    	cin>>s1;
    	s2 = s1;
    	fo(i, s1.length()){
    		if(s1[i] == '4'){
    			s1[i] = '2';
    			s2[i] = '2';
			}
			else
				s2[i] = '0';
		}
		cout<<s1<<' ';
		int flag = 0;
		fo(i, s2.length())
			if(flag == 0 && s2[i] == '0')
				continue;
			else{
				flag = 1;
				cout<<s2[i];
			}
    	cout<<'\n';
    }
}

