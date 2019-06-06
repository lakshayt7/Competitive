#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long int t;
	cin>>t;
	 while(t--){
	 	long int n, p;
	 	cin>>n>>p;
	 	if(n==1 || n==2)
	 		cout<<p*p*p<<'\n';
	 	else{
		 	long int k = (n-1)/2;
		 	long long int ans = (p-k)*(p-k) + (p-k)*(p-n) + (p-n)*(p-n); 
		 	cout<<ans<<'\n';	
		}
	 }
}
