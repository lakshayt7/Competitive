#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int n, m;
    	cin>>n>>m;
		if(n==1 && m==1)
			cout<<1<<'\n'<<1<<'\n';
		else if(n==2 && m==1){
			cout<<1<<'\n';
			cout<<1<<'\n'<<1<<'\n';
		}
		else if(n==1 && m==2){
			cout<<1<<'\n';
			cout<<1<<' '<<1<<'\n';
		}
		else if(n==1 || m==1){
			cout<<2<<'\n';
			char b;
			if(n == 1){
				for(int i = 0 ; i < m ; i++){
					if((i%4 == 0 || i%4 == 1))
		    			cout<<"1"<<' ';
					else
						cout<<"2"<<' ';
				}
				cout<<'\n';
			}
			else{
				for(int i = 0 ; i < n ; i++){
					if((i%4 == 0 || i%4 == 1))
		    			cout<<"1"<<'\n';
					else
						cout<<"2"<<'\n';
				}	
			}
		}
		else if(n==2 && m==2){
			cout<<2<<'\n';
			cout<<1<<' '<<1<<'\n'<<2<<' '<<2<<'\n';
		}
		else if(n==2 || m==2){
			cout<<3<<'\n';
			if(n==2){
				for(int i = 0 ; i < m ; i++){
					if(i%3 == 0)
	    				cout<<"1 ";
					else if(i%3 == 1)
						cout<<"2 ";
					else
						cout<<("3 ");
				}
				cout<<'\n';
				for(int i = 0 ; i < m ; i++){
					if(i%3 == 0)
	    				cout<<"1 ";
					else if(i%3 == 1)
						cout<<"2 ";
					else
						cout<<("3 ");
				}
				cout<<'\n';
			}
			else{
				for(int i = 0 ; i < n ; i++){
					if(i%3 == 0)
						cout<<"1 1 "<<'\n';
					else if(i%3 == 1)
						cout<<"2 2 "<<'\n';
					else
						cout<<"3 3 "<<'\n';
				}
			}
		}
		else{
			cout<<4<<'\n';
	    	for(int i = 0 ; i < n ; i++){
	    		for(int j = 0 ; j < m ; j++){
	    			if(i%4 == 0){
	    				if((j%4 == 0 || j%4 == 1))
	    					cout<<"1 ";
						else
							cout<<"2 ";
					}
					else if(i%4 == 1){
						if(j%4 == 0 || j%4 == 1)
	    					cout<<"3 ";
						else
							cout<<"4 ";
					}
					else if(i%4 == 2){
						if(j%4 == 0 || j%4 == 1)
	    					cout<<"2 ";
						else
							cout<<"1 ";
					}
					else if(i%4 == 3){
						if(j%4 == 0 || j%4 == 1)
	    					cout<<"4 ";
						else
							cout<<"3 ";
					}	
				}
				cout<<'\n';
			}		
		}
	}
    
}
