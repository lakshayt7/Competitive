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
    ll t ,f;
    cin>>t>>f;
    while(t--){
    	
    	int a, b, c, d, e;
    	a = b = c = d = e = 0;
    	char n;
    	vector <int> V[5];
    	fo(i, 119){
    		cout<<(5*i + 1)<<endl;
    		cout.flush();
    		cin>>n;
    		if(n == 'A'){
    			a++;
    			V[0].pb(i);
    		}
    		if(n == 'B'){
    			b++;
    			V[1].pb(i);
    		}
    		if(n == 'C'){
    			c++;
    			V[2].pb(i);
    		}
    		if(n == 'D'){
    			d++;
    			V[3].pb(i);
    		}
    		if(n == 'E'){
    			e++;
    			V[4].pb(i);
    		}
		}
		int ans1, ans2, ans3, ans4, ans5;
		if(a == 23){
			ans1 = 0;
		}
		if(b == 23){
			ans1 = 1;
		}
		if(c == 23){
			ans1 = 2;
		}
		if(d == 23){
			ans1 = 3;
		}
		if(e == 23){
			ans1 = 4;
		}
		a = b = c = d = e = 0;
		vector <int> V1[5];
		fo(i, V[ans1].size()){
			cout<<(5*V[ans1][i] + 2)<<endl;
			cout.flush();
			cin>>n;
			if(n == 'A'){
    			a++;
    			V1[0].pb(i);
    		}
    		if(n == 'B'){
    			b++;
    			V1[1].pb(i);
    		}
    		if(n == 'C'){
    			c++;
    			V1[2].pb(i);
    		}
    		if(n == 'D'){
    			d++;
    			V1[3].pb(i);
    		}
    		if(n == 'E'){
    			e++;
    			V1[4].pb(i);
    		}
		}
		if(a == 5){
			ans2 = 0;
		}
		if(b == 5){
			ans2 = 1;
		}
		if(c == 5){
			ans2 = 2;
		}
		if(d == 5){
			ans2 = 3;
		}
		if(e == 5){
			ans2 = 4;
		}
		a = b = c = d = e = 0;
		vector <int> V2[5];
		fo(i, V1[ans2].size()){
			cout<<(5*V1[ans2][i] + 3)<<endl;
			cout.flush();
			cin>>n;
			if(n == 'A'){
    			a++;
    			V2[0].pb(i);
    		}
    		if(n == 'B'){
    			b++;
    			V2[1].pb(i);
    		}
    		if(n == 'C'){
    			c++;
    			V2[2].pb(i);
    		}
    		if(n == 'D'){
    			d++;
    			V2[3].pb(i);
    		}
    		if(n == 'E'){
    			e++;
    			V2[4].pb(i);
    		}
		}
		if(a == 1){
			ans3 = 0;
		}
		if(b == 1){
			ans3 = 1;
		}
		if(c == 1){
			ans3 = 2;
		}
		if(d == 1){
			ans3 = 3;
		}
		if(e == 1){
			ans3 = 4;
		}
		a = b = c = d = e = 0;
		vector <int> V3[5];
		fo(i, V2[ans3].size()){
			cout<<(5*V2[ans3][i] + 4)<<endl;
			cout.flush();
			cin>>n;
			if(n == 'A'){
    			a++;
    			V3[0].pb(i);
    		}
    		if(n == 'B'){
    			b++;
    			V3[1].pb(i);
    		}
    		if(n == 'C'){
    			c++;
    			V3[2].pb(i);
    		}
    		if(n == 'D'){
    			d++;
    			V3[3].pb(i);
    		}
    		if(n == 'E'){
    			e++;
    			V3[4].pb(i);
    		}
		}
		if(a == 1){
			ans4 = 0;
		}
		if(b == 1){
			ans4 = 1;
		}
		if(c == 1){
			ans4= 2;
		}
		if(d == 1){
			ans4 = 3;
		}
		if(e == 1){
			ans4 = 4;
		}
	ans5 = 10 - ans1 - ans2 - ans3 - ans4;
		if(ans1 == 0)
			cout<<"A";
		else if(ans1 == 1)
			cout<<"B";
		else if(ans1 == 2)
			cout<<"C";
		else if(ans1 == 3)
			cout<<"D";
		else
			cout<<"E";
		if(ans2 == 0)
			cout<<"A";
		else if(ans2 == 1)
			cout<<"B";
		else if(ans2 == 2)
			cout<<"C";
		else if(ans2 == 3)
			cout<<"D";
		else
			cout<<"E";
		if(ans3 == 0)
			cout<<"A";
		else if(ans3 == 1)
			cout<<"B";
		else if(ans3 == 2)
			cout<<"C";
		else if(ans3 == 3)
			cout<<"D";
		else
			cout<<"E";
		if(ans4 == 0)
			cout<<"A";
		else if(ans4 == 1)
			cout<<"B";
		else if(ans4 == 2)
			cout<<"C";
		else if(ans4 == 3)
			cout<<"D";
		else
			cout<<"E";
		if(ans5 == 0)
			cout<<"A";
		else if(ans5 == 1)
			cout<<"B";
		else if(ans5 == 2)
			cout<<"C";
		else if(ans5 == 3)
			cout<<"D";
		else
			cout<<"E";
		cout<<"\n";
    }
    
}

