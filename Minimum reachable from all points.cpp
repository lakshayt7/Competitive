#include<bits/stdc++.h>

using namespace std;

long int S[60000];
long int top = -1;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int n;
    cin>>n;
    long long int A[n + 2], B[n + 2];
    A[0] = 0;
    A[n + 1] = 0;
    for(int i = 1 ; i < n + 1; i ++){
    	cin>>A[i];
	}
    vector < pair < int, int > > v ;
    top ++ ;
	S[top] = 0;
    B[0] = 0;
    B[n+1] = 0;
    for(int i = 1 ; i < n + 2 ; i++)
    	if(A[S[top]] + i - S[top] > A[i]){
    		while(A[S[top]] > A[i] + i - S[top]){
    			top--;
			}
			top++;
			S[top] = i;
    	}
    int cot = 0;
    int j = 1;
    long long int M = 1000000;
    while(j < n+1){
    	if(S[cot] < n + 1){
	    	while(A[S[cot]] + j - S[cot] <  A[S[cot + 1]] + S[cot + 1] - j ){
	    	//	cout<<"asdSD";
	    		B[j] = A[S[cot]] + j - S[cot];
	    		j++;
	    		cout<<B[j-1]<<' ';
	    		M = max(M, B[j-1]);
			}
			cot++;
		}
		else{
			B[j] = A[S[cot]] + S[cot] - j;
	    	j++;
	    	cout<<B[j-1]<<' ';
	    	M = max(M, B[j-1]);
		}
		
	}
    	
    
}
