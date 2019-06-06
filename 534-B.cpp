#include<bits/stdc++.h>

using namespace std;

int main(){
	char c;
	c = 'a';
	vector<char> V;
	scanf("%c", &c);
	long int count = 0;
	while(c>=97  && c <=122 ){
		V.push_back(c);	
		scanf("%c", &c);
		count++;
	}
	int counter = 0;
	for(int i = 0 ; i < count - 1 ; i ++ ){
		if(V[i] == V[i+1]){
			//cout<<V[i]<<V[i+1];
			counter ++;
			V.erase(V.begin() + i); 
			V.erase(V.begin() + i);
			i-=2;
			count = count - 2; 
			/*for(int j = 0 ; j < count ; j ++ )
				cout<<V[j]<<' ';
			cout<<'\n';*/
		}
	}
	//cout<<counter;
	if(counter%2==0)
		cout<<"No";
	else
		cout<<"Yes";
	
}
