#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	char c;
	while(t--){
		long int n;
		cin>>n;
		scanf("%c", &c);
		int A[n];
		long int prev = -1,ans = 0;
		for(int i =0 ; i < n ; i ++ ){
			scanf("%c", &c);
			if(c=='1'){
					if((i-prev-1)/2>0&&prev==-1){
						ans += (i-prev-1)/2;
						//cout<<"ASD";
					}
					else{
						ans += (i-prev-2)/2;
					}
					//cout<<ans<<' ';	
					prev = i;
			}
		}
		if(prev==-1)
			ans+=(n-prev)/2;	
		else
			ans+=(n-prev-1)/2;
		cout<<ans<<'\n';
	}	
	
}
