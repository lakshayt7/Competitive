/*#pragma warning(disable:4996)//disable depriciated warning
#pragma GCC optimize ("Ofast")//may cause floating point error
#pragma comment(linker, "/stack:200000000")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize ("-ffloat-store")
These statements help with TLE
*/

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

#define foo(i,n)   for(ll (i)=0 ;i<(n); i ++)
#define pb push_back
#define modul 1000000007

typedef long double ld;
typedef pair<ll,ll> pl;
typedef vector<pl> vp;
typedef vector<ll> vl;

inline long long int fin(void){
    char t;
    long long int x=0;
    long long int negative=0;
    t = getchar();
    while ((t<48 || t>57) && t!='-')
        t = getchar();
    if (t == '-') {
        negative = 1;
        t = getchar();
    }
    while (t>=48 && t<=57){
        x = (x<<3) + (x<<1) + t - 48;
        t = getchar();
    }
    if (negative)
        x = -x;
    return x;
}
inline void fout(long long int x, int mode){
    char a[20];
    long long int i=0, j;
    a[0] = '0';
    if (x < 0){
        putchar('-');
        x = -x;
    }
    if (x==0)
       putchar('0');
    while (x){
        a[i++] = x%10 + 48;
        x /= 10;
    }
    for (j=i-1; j>=0; j--)
        putchar(a[j]);
    if (mode == 0)
       putchar('\n');
    else putchar(' ');
}

int main(){
    ll t;
    t = fin();
    cin.ignore();
    while(t--){
        char a;
        a = getchar();
        vp V;
        ll A[26];
        foo(i,26)
            A[i] = 0;
        ll n = 0;
        while(a>='A'&&a<='Z'){
            A[a-'A']++;
            a = getchar();
            n++;
        }
        ll count = 0;
        foo(i, 26){
               V.pb({A[i], i});
               count++;
        }
        sort(V.begin(), V.end());
        vl V1;
        //cout<<" cunt = ="<<count<<'\n';
        foo(i, count)
        	V1.pb(V[count-1-i].first);
        ll mini = -1;
        for(int i= 1 ; i <= 26 ; i ++ ){
        	if(n%i==0){
        		//cout<<"i = "<<i<<' ';
        		ll number = 0;  
        		for(int j =0 ; j < i ; j ++ ){
        			if(n/i > V1[j]){
        			//	cout<<"ASD";
        				number+=n/i-V1[j];
        			}
				}
				if(mini==-1){
					mini = number;
				}	
				else{
					mini = min(mini, number);
 				}
			}
		}
		fout(mini, 0);
    }
}

