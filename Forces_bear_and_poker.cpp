#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long int A, pre = -1;
    int flag = 0;
    cin>>n;
    while(n--){
    	cin>>A;
    	while(!(A%3))
    		A/=3;
    	while(!(A%2))
    		A/=2;
    	if(pre!=-1 && pre != A)
    		flag = 1;
		pre = A;
	//	cout<<pre<<' ';
	}
	//cout<<'\n';
	if(flag == 0)
		cout<<"Yes"<<'\n';
	else
		cout<<"No"<<'\n';
}
