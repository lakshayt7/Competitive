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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    long long int n = 0;
    cin>>t;
    string s;
    long long int r;
    while(t--){
    	n++;
    	cout<<"Case #"<<n<<": ";
    	cin>>r;
    	cin>>s;
    	fo(i, 2*r-2){
    		if(s[i] == 'E')
    			cout<<"S";
    		else
    			cout<<"E";
		}
		cout<<'\n';
    }
}


