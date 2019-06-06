#include <iostream>

using namespace std;

typedef long long int ll;



void make_graph(int ***A, ll a1, ll b1, ll c1, ll a, ll b, ll c, long int count){
    A[a][b][c] = count;
    cout<<"count = "<<count<<' '<<a<<' '<<b<<' '<<c<<'\n';
    count++;
    if(a>0 && A[0][b][c] > count)
        make_graph(A, a1, b1, c1, 0, b, c, count);
    if(b>0 && A[a][0][c] > count)
        make_graph(A, a1, b1, c1, a, 0, c, count);
    if(c>0 && A[a][b][0] > count)
        make_graph(A, a1, b1, c1, a, b, 0, count);
    if(b+a <= b1 && A[0][a+b][c] > count)
        make_graph(A, a1, b1, c1, 0, a+b, c, count);
    if(b+a > b1 && A[a-b1+b][b1][c] > count)
        make_graph(A, a1, b1, c1, a-b1+b, b1, c, count);
    if(b+a <= a1 && A[a+b][0][c] >count)
        make_graph(A, a1, b1, c1, a+b, 0, c, count);
    if(b+a > a1 && A[a1][b-a1+a][c] > count)
        make_graph(A, a1, b1, c1, a1, b-a1+a, c, count);
    if(b+c <= c1 && A[a][0][b+c] > count)
        make_graph(A, a1, b1, c1, a, 0, b+c, count);
    if(b+c > c1 && A[a][b-c1+c][c1] > count)
        make_graph(A, a1, b1, c1, a, b-c1+c, c1, count);
    if(b+c <= b1 && A[a][b+c][0] > count)
        make_graph(A, a1, b1, c1, a, b+c, 0, count);
    if(b+c > b1 && A[a][b1][c-b1+b] > count)
        make_graph(A, a1, b1, c1, a, b1, c-b1+b, count);
    if(c+a <= c1 && A[0][b][c+a] > count)
        make_graph(A, a1, b1, c1, 0, b, c+a, count);
    if(a+c > c1 && A[a-c1+c][b][c1] > count)
        make_graph(A, a1, b1, c1, a-c1+c, b, c1, count);
    if(c+a <= a1 && A[a+c][b][0] > count)
        make_graph(A, a1, b1, c1, a+c, b, 0, count);
    if(a+c > a1 && A[a1][b][c-a1+a] > count)
        make_graph(A, a1, b1, c1, a1, b, c-a1+a, count);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    ll S1, S2, S3, a, b, c, n, c1, c2, c3;
    while(t--){
        cin>>S1>>S2>>S3>>a>>b>>c>>n;
        int ***A = new int**[S1+1];
        for (int i = 0; i < S1+1; i++) {
            A[i] = new int*[S2+1];
            for (int j = 0; j < S2+1; j++)
                A[i][j] = new int[S3+1];
        }
        for(int i = 0 ; i < S1+1 ; i++)
            for(int j = 0 ; j < S2+1 ; j++)
                for(int k = 0 ; k < S3+1 ; k++)
                    A[i][j][k] = 100000;
        long int count = 0;
        make_graph(A, S1, S2, S3, a, b, c, count);
        /*for(int i = 0 ; i < S1+1 ; i++)
            for(int j = 0 ; j < S2+1 ; j++)
                for(int k = 0 ; k < S3+1 ; k++)
                    cout<<A[i][j][k]<<' '<<i<<' '<<j<<' '<<k<<'\n';*/
        while(n--){
            cin>>c1>>c2>>c3;
            if(c1 > S1 || c2 > S2 || c3 > S3 || A[c1][c2][c3]==0)
                cout<<"IMPOSSIBLE"<<'\n';
            else
                cout<<A[c1][c2][c3]<<'\n';
        }
    }
}
