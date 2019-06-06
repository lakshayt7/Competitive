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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
    	//ll X1 = 3, Y1 = 212312, X2 = 31231, Y2 = 4356776;
        cout<<"Q"<<' '<<0<<' '<<0<<endl;
        ll a1, a2, a3, a4, q, x1, x2, y1, y2, ans;
        cin>>a1;
        //a1 = X1+Y1;
        cout<<"Q"<<' '<<0<<' '<<"1000000000"<<endl;
        cin>>a2;
        //a2 = 1000000000 - Y2 + X1; 
        cout<<"Q"<<' '<<"1000000000"<<' '<<0<<endl;
        cin>>a3;
        //a3 = 1000000000 - X2 + Y1;
        q = (a1 - a3 + 1000000000)/2;
        cout<<"Q"<<' '<<q<<' '<<0<<endl;
        cin>>a4;
        //a4 = Y1;
        x1 = a1 - a4;
        y1 = a4;
        x2 = 1000000000 + y1 - a3;
        y2 = 1000000000 + x1 - a2;
        //cout<<a1<<' '<<a2<<' '<<a3<<' '<<a4;
        cout<<"A"<<' '<<x1<<' '<<y1<<' '<<x2<<' '<<y2<<endl;
        cin>>ans;
        if(ans==-1)
        	break;
    }
}

