#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		long int n, m;
		cin>>n>>m;
		long long int H[n];
		long int C[n];
		long int CO[m];
		long long int S[n];
		long int top = 0;
		for(int i = 0 ;i < n ;i ++){
			cin>>H[i];
		}
		for(int i = 0; i < n ;i++){
			int flag = 0;
			if(i!=0){
				while(top!=-1){
					if(S[top]<=H[i])
						top--;
				}
				top++;
			}	
			S[top] = H[i];
		}
		long int count = 0;
		while(top!=-1){
			if(CO[C[S[top]]] == 0){
				count++;
				CO[C[S[top]]] = 1;
			}
			top--;
		}
		cout<<count<<'\n';
	}
}
