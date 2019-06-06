#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	long int n, r = -1, b = -1, g = -1;
	cin>>n;
	char a;
	scanf("%c", &a);
	string s;
	cin>>s;
	int count = 0;
	for(int i = 1 ; i < n ; i ++ ){
		if(s[i]==s[i-1]){
			count++;
			if(s[i]=='R'){
				//cout<<"ASD";
				s[i] = 'B';
				if(s[i+1] == 'B'){
					s[i]='G';
				}	
			}	
			else if(s[i]=='B'){
				//cout<<"ASD";
				s[i] = 'G';
				if(s[i+1] == 'G')
					s[i]='R';
			}
			else{
				//cout<<"ASD";
				s[i] = 'R';
				if(s[i+1] == 'R')
					s[i]='B';
			}
		}
	}
	cout<<count<<'\n';
	for(int i = 0 ; i < n ; i ++ ) {
		cout<<s[i];
	}
}
