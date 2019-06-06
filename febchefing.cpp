#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int mark[n][26];
		int markf[26];
		for(int i = 0; i < n ; i ++ ){
			for(int j = 0 ; j < 26 ; j ++ )
				mark[i][j] = 0;
			string s;
			cin>>s;
			for(int j = 0 ; j < s.length() ; j ++ ){
				mark[i][int(s[j])-97] = 1;
			}	
			if(i==0){
				for(int j = 0 ; j < 26  ; j ++ ){
					markf[j] = mark[i][j];
				}
			}
			for(int j = 0 ; j < 26 ; j ++ )
				markf[j] = mark[i][j]&&markf[j];
		}
		int count = 0;
		for(int i = 0 ; i < 26 ; i++ )
			if(markf[i] == 1)
				count++;
		cout<<count<<'\n';
	}
} 
