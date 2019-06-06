#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long int n, c;
	cin>>n>>c;
	int flag = 0; 
	while(flag==0){
		cout<<1<<' '<<n<<endl;
		n--;
		cin>>flag;
	}
	cout<<2<<endl;
	cout<<3<<' '<<n+1<<endl;
}
