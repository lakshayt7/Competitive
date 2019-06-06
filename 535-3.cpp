#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	long int n, r = -1, b = -1, g = -1;
	cin>>n;
	char a;
	scanf("%c", &a);
	int counter[6];
	for(int i = 0 ; i < 6 ; i ++)
		counter[i] = 0;
	string s;
	cin>>s;
	for(int i = 0 ; i < n ; i ++ ){
		if(i%3==0){
			if(s[i] != 'R'){
				counter[0]++;
				counter[1]++;
			}
			if(s[i] != 'B'){
				counter[2]++;
				counter[3]++;
			}
			if(s[i] != 'G'){
				counter[4]++;
				counter[5]++;
			}			
		}
		if(i%3==1){
			if(s[i] != 'R'){
				counter[2]++;
				counter[4]++;
			}
			if(s[i] != 'B'){
				counter[0]++;
				counter[5]++;
			}
			if(s[i] != 'G'){
				counter[1]++;
				counter[3]++;
			}			
		}	
		if(i%3==2){
			if(s[i] != 'R'){
				counter[3]++;
				counter[5]++;
			}
			if(s[i] != 'B'){
				counter[1]++;
				counter[4]++;
			}
			if(s[i] != 'G'){
				counter[0]++;
				counter[2]++;
			}			
		}	
	}
	int min = 0;
	//cout<<counter[min]<<' ';
	for(int i = 1 ; i < 6 ; i ++){
		if(counter[min] > counter[i]){
			min = i;
		}
		//cout<<counter[i]<<' ';
	}
	//cout<<min;
	cout<<counter[min]<<'\n';
	for(int i = 0 ; i < n ; i ++){
		if(i%3==0){
			if(min==0||min==1){
				cout<<'R';
			}
			if(min==2||min==3){
				 cout<<'B';
			}
			if(min==4||min==5){
				cout<<'G';
			}			
		}
		if(i%3==1){
			if(min==2||min==4){
				cout<<'R';
			}
			if(min==0||min==5){
				cout<<'B';
			}
			if(min==1||min==3){
				cout<<'G';
			}			
		}	
		if(i%3==2){
			if(min==3||min==5){
				cout<<'R';
			}
			if(min==1||min==4){
				cout<<'B';
			}
			if(min==0||min==2){
				cout<<'G';
			}			
		}	
	}
}
