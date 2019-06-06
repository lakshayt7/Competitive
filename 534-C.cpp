#include<bits/stdc++.h>

using namespace std;

int main(){
    char c = '0';
    int flag1 = 0;
    int flag2 = 0;
    while(c=='0'||c=='1'){
    	scanf("%c", &c);
    	if(c=='0'){
    		if(flag1==0){
    			cout<<"1 1"<<'\n';
    			flag1 = 1;
			}
			else{
				cout<<"3 1"<<'\n';
				flag1 = 0;
			}
		}
		else if(c=='1'){
			if(flag2==0){
    			cout<<"4 3"<<'\n';
    			flag2 = 1;
			}
			else{
				cout<<"4 1"<<'\n';
				flag2 = 0;
			}
		}
	}
}
