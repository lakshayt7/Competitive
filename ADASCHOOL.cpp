#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    char l;
    scanf("%c", &l);
    while(t--){
    	char c;
    	vector <int> v;
    	vector <char> z;
    	int count = 0, n = 0;
    	while(1){
    		scanf("%c", &c);
    		if(c!='P'&&c!='.')
    			break;
    		if(c == ' '|| c == '\n' || c < 40)
    			break;
    		if(c=='P'){
    			v.push_back(count);
    			n++;
    		}
    		count++;
		}
		long long int sum = 0;
		for(int i = 0 ; i < n ;i +=2){
			sum += v[i] - i;
		}
	//	cout<<sum;
		if(sum%3==0)
			cout<<"No"<<'\n';
		else
			cout<<"Yes"<<'\n';
    	
	}
}
