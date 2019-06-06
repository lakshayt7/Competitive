#include <iostream>

using namespace std;

long int maximum(long int x, long int y, long int z) {
	long int max = x; /* assume x is the largest */

	if (y > max) { /* if y is larger than max, assign y to max */
		max = y;
	} /* end if */

	if (z > max) { /* if z is larger than max, assign z to max */
		max = z;
	} /* end if */

	return max; /* max is the largest value */
} /* end function maximum */

long int merger(long long int A[], long int n, long int k){
	if(n==0)
		return 0;
	if(n==1){
		if(A[0] > k)
			return 1;
		else
			return 0; 
	}
	long int mid;
	if(A[n/2+1]>k&&A[n/2]>k)
		mid = 0;
	else if((A[(n/2)+1]>k)||(A[n/2]>k)){
		long int i = 0;
		mid = 2;
		while( (n/2 - 1 -i >= 0 ) && (A[n/2 - 1 -i] <= k) ){
			i++;
			mid++;
		}
		i = 0;
		while( (n/2 + 2 + i <= n-1 ) && (A[n/2 + 2 + i] <= k) ){
			i++;
			mid++;
		}
	}
	else{
		long int mid1;
		long int i = 0;
		long int j = 0;
		while( (n/2 - 1 -i >= 0 ) && (A[n/2 - 1 -i] <= k) ){
			i++;
			mid++;
		}
		while( (n/2 + 2 + j <= n-1 ) && (A[n/2 + 2 + j] <= k) ){
			j++;
			mid++;
		}
		if(n/2 - 1 -i == -1){
			if(n/2 + 2 + j == n)
				mid = 0;
			else{
				j++;
				mid++;
				while( (n/2 + 2 + j <= n-1 ) && (A[n/2 + 2 + j] <= k) ){
					j++;
					mid++;
				}	
			}
		}
		else if(n/2 + 2 + j == n){
				i++;
				mid++;
				while( (n/2 - 1 -i >= 0 ) && (A[n/2 - 1 -i] <= k) ){
					i++;
					mid++;
				}
		}
		else{
			long int mid1 = 1;
			long int mid2 = 1;
			i++;
			j++;
			while( (n/2 - 1 -i >= 0 ) && (A[n/2 - 1 -i] <= k) ){
					i++;
					mid1++;
			}
			while( (n/2 + 2 + j <= n-1 ) && (A[n/2 + 2 + j] <= k) ){
					j++;
					mid2++;
			}	
			if(mid1>mid2)
				mid = mid + mid1;
			else
				mid = mid + mid2;
		}
	}
	return maximum(mid, merger(A, n/2+1, k), merger(A+n/2+1, n-n/2-1, k));
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		long int n, k;
		cin>>n>>k;
		long long int A[n];
		for(int i = 0 ;i < n ;i ++){
			cin>>A[i];
		}
		cout<<merger(A, n, k);	
	}
}
