#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	long int n;
	while(t--){
		cin>>n;
		long int a = 0, b = 1, c = 2, a1, b1, c1;
		long long int z[n];
		for(int i = 0 ; i < n ; i++){
			a1 = (a++) % n + 1;
			b1 = (b++) % n + 1;
			c1 = (c++) % n + 1;
			cout<<1<<' '<<a1<<' '<<b1<<' '<<c1<<endl;
			cin>>z[i];
		}
		long long int y[n], s[n];
		for(int i = 0 ; i < n ; i++)
			s[i] = 0;
		int flag = 1, count = 0;
		int p = -1;
		while(flag == 1 && count < 50){
			long int x[n];
			flag = 0;
			int ch = 0;
			for(int i = 0 ; i < n ; i++){
				y[i] = z[i]%2;
				z[i] -= y[i];
				z[i]/=2;
				//cout<<'y'<<' '<<y[i]<<' '<<'z'<<' '<<z[i]<<' ';
			}
			for(int i = 0 ; i < n ;i++){
				if(z[i]>0)
					flag = 1;
			}
			//cout<<endl;
			x[0] = 1;
			x[1] = 1;
			for(int i = 2 ; i < n ; i ++ )
				x[i] = (y[i-2] - x[i-1] - x[i-2])%2;
			if(p!=1 && abs((y[n-2] - x[n-1] - x[n-2])%2)  == abs(x[0]) && abs((y[n-1] - x[0] - x[n-1])%2) == abs(x[1])){
				//cout<<"asdasd";
				p = 1;
				for(int i = 0 ; i < n ;i++){
					cout<<x[i]<<' ';
				}
				ch = 1;
				for(int i = 0 ; i < n ; i ++ )
					s[i]+=abs(x[i]) * pow(2, count);
			}
			x[0] = 0;
			x[1] = 0;
			for(int i = 2 ; i < n ; i ++ )
				x[i] = (y[i-2] - x[i-1] - x[i-2])%2;
			if(p!=2 && abs((y[n-2] - x[n-1] - x[n-2])%2)  == abs(x[0]) && abs((y[n-1] - x[0] - x[n-1])%2) == abs(x[1]) && ch == 0){
			//	cout<<"as";
				p = 2;
				ch = 1;
				for(int i = 0 ; i < n ; i ++ )
					s[i]+=abs(x[i]) * pow(2, count);
			}
			x[0] = 0;
			x[1] = 1;
			for(int i = 2 ; i < n ; i ++ )
				x[i] = (y[i-2] - x[i-1] - x[i-2])%2;	
			if(p!=3 && abs((y[n-2] - x[n-1] - x[n-2])%2)  == abs(x[0]) && abs((y[n-1] - x[0] - x[n-1])%2) == abs(x[1]) && ch == 0){
				//cout<<"AS";
				p = 3;
				ch = 1;
				for(int i = 0 ; i < n ; i ++ )
					s[i]+=abs(x[i]) * pow(2, count);
			}
			x[0] = 1;
			x[1] = 0;
			for(int i = 2 ; i < n ; i ++ )
				x[i] = (y[i-2] - x[i-1] - x[i-2])%2;
			if(p!=4 && abs((y[n-2] - x[n-1] - x[n-2])%2)  == abs(x[0]) && abs((y[n-1] - x[0] - x[n-1])%2) == abs(x[1]) && ch == 0){
				//cout<<"assd";
				p = 4;
				for(int i = 0 ; i < n ; i ++ )
					s[i]+=abs(x[i]) * pow(2, count);
			}
			x[0] = 1;
			x[1] = 1;
			for(int i = 2 ; i < n ; i ++ )
				x[i] = (y[i-2] - x[i-1] - x[i-2])%2;
			if(ch == 0 && abs((y[n-2] - x[n-1] - x[n-2])%2)  == abs(x[0]) && abs((y[n-1] - x[0] - x[n-1])%2) == abs(x[1])){
				//cout<<"asdasd";
				p = 1;
				for(int i = 0 ; i < n ;i++){
					cout<<x[i]<<' ';
				}
				ch = 1;
				for(int i = 0 ; i < n ; i ++ )
					s[i]+=abs(x[i]) * pow(2, count);
			}
			x[0] = 0;
			x[1] = 0;
			for(int i = 2 ; i < n ; i ++ )
				x[i] = (y[i-2] - x[i-1] - x[i-2])%2;
			if(abs((y[n-2] - x[n-1] - x[n-2])%2)  == abs(x[0]) && abs((y[n-1] - x[0] - x[n-1])%2) == abs(x[1]) && ch == 0){
			//	cout<<"as";
				p = 2;
				ch = 1;
				for(int i = 0 ; i < n ; i ++ )
					s[i]+=abs(x[i]) * pow(2, count);
			}
			x[0] = 0;
			x[1] = 1;
			for(int i = 2 ; i < n ; i ++ )
				x[i] = (y[i-2] - x[i-1] - x[i-2])%2;	
			if(abs((y[n-2] - x[n-1] - x[n-2])%2)  == abs(x[0]) && abs((y[n-1] - x[0] - x[n-1])%2) == abs(x[1]) && ch == 0){
				//cout<<"AS";
				p = 3;
				ch = 1;
				for(int i = 0 ; i < n ; i ++ )
					s[i]+=abs(x[i]) * pow(2, count);
			}
			x[0] = 1;
			x[1] = 0;
			for(int i = 2 ; i < n ; i ++ )
				x[i] = (y[i-2] - x[i-1] - x[i-2])%2;
			if(abs((y[n-2] - x[n-1] - x[n-2])%2)  == abs(x[0]) && abs((y[n-1] - x[0] - x[n-1])%2) == abs(x[1]) && ch == 0){
				//cout<<"assd";
				p = 4;
				for(int i = 0 ; i < n ; i ++ )
					s[i]+=abs(x[i]) * pow(2, count);
			}
			
			count++;
			cout<<'\n';
		}
		cout<<2<<' ';
		for(int i = 0 ; i < n ; i ++)
			cout<<s[i]<<' ';
		cout<<endl;
	}
}
