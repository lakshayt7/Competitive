#include <bits/stdc++.h>

using namespace std;

long long int ret ( priority_queue< pair < long long int, long long int >  > pq ,  long long int n, long long int m){
	if(m <= 0)
		return pq.top().first;
	if(pq.top().first<=0)
		return 0;
	if(pq.top().second==0)
		return pq.top().first;
	pair<long long int, long long int> max1 = pq.top();
	//pop_heap(v.begin(), v.end());
	pq.pop();
	pair<long long int, long long int> max2 = pq.top();
	//pop_heap(v.begin(), v.end());
	//cout<<max1.first<<' '<<max2.first<<'\n';
	long long int diff = (((max1.first-max2.first)/max1.second)+1) * max1.second;
	//cout<<diff<<'\n';
	if(diff > m*max1.second)
		return max1.first - max1.second;
	else{
		m = m - ( diff / max1.second );
		max1.first = max1.first - diff;
		//cout<<max1.first;
		pq.push(max1);//ologn
		//push_heap(v.begin(), v.end());
		//v.push_back(max2);
		//push_heap(v.begin(), v.end());
		/*for(int i = 0; i < n ; i++){
			cout<<pq.top()<<' ';
			pq.pop();
		}*/
		//cout<<'\n';
		return ret(pq, n, m);
	}
	return pq.top().first;
}
///////////////////////////////////TIME COMPLEXITY = O(sum(A)*log(n))/////////////////////////////////////////
int main(){
	ios_base::sync_with_stdio(false); 
	int n;
	cin>>n;
	long long int m;
	long long int A[n], B[n];
	cin>>m;
	for(int i = 0 ; i < n ; i ++ )//on
		cin>>A[i];
	for(int i = 0 ; i < n ; i ++ ){
		cin>>B[i];//on
	}
	//vector < pair <long long int, long long int> > v;
	priority_queue <pair <long long int, long long int> > pq;
	for (int i = 0 ; i < n ; i++ )
		pq.push(make_pair(A[i]*B[i], B[i]));//on
	//make_heap(v.begin(), v.end());
	long long int ans = ret(pq, n, m);
  	cout<<ans;
}
