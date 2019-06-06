#include<bits/stdc++.h>
using namespace std;

struct list_node{
    struct list_node *next;
    struct list_node *prev;
    int mark = 0;
    int value;
    struct list_node *pi;
};

struct list_node *root;

vector <pair<int, int> > v;

void BFS_Search(long long int m, int p, int colour[], int colour1[], struct list_node *top[], int par){
    colour[p] = 1;
    low[p] = depth;
    d[p] = depth;
    int bach = 0;
    if(par == 0)
    	colour1[p] = 1;
    else
    	colour1[p] = 2;
    struct list_node *t = top[p];
    while(t!=NULL){
        if(colour[t->value] == 0){
            bach = bach + 1;
            parent[t->value] = p;
            DFS_Search(m, t->value, colour, top, d, low, art, parent);
            low[p] = min(low[p], low[t->value]);
            if(low[t->value]>d[p]){
                if(p<t->value)
                    v.push_back(make_pair(p, t->value));
                else
                    v.push_back(make_pair(t->value, p));
            }
            if(parent[p]!= -1 && low[t->value] >= d[p]){
                art[p] = 1;
            }
            if(bach>1 && parent[p] == -1)
                art[p] = 1;
        }
        else if(t->value!=parent[p])
            low[p] = min(low[p], d[t->value]);
        t = t->next;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int m;
    long long int n;
    long long int p;
    long long int q;
    cin>>m;
    struct list_node **A;
    A = new struct list_node *[m];
    struct list_node *top[m];
    struct list_node *tail[m];
    int deg[m];
    for(int i = 0 ; i < m ; i++){
        top[i] = NULL;
        tail[i] = NULL;
        deg[i] = 0;
    }
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>p>>q;
        deg[p]++;
        deg[q]++;
        
        if(top[p] == NULL){
            struct list_node *n = new struct list_node;
            n->value = q;
            n->next = NULL;
            n->prev = NULL;
            top[p] = n;
            tail[p] = n;
        }
        else{
            struct list_node *n = new struct list_node;
            n->value = q;
            n->prev = tail[p];
            tail[p]->next = n;
            tail[p] = n;
        }
        if(top[q] == NULL){
            struct list_node *n = new struct list_node;
            n->value = p;
            top[q] = n;
            tail[q] = n;
        }
        else{
            struct list_node *n = new struct list_node;
            n->value = p;
            n->prev = tail[p];
            tail[q]->next = n;
            tail[q] = n;
        }
    }
    int colour[m];
    int colour1[m];
    for(int  i = 0 ; i < m ; i++){
        colour[i] = 0;
        colour1[i] = 0;
    } 
    struct list_node *t;
    int depth = -1;
    int par = 0;
    for(int i = 0; i < m ;i ++){
        if(!colour[i])
            BFS_Search(m, i, colour, colour1, top, par);
    }
    int flag = 0;
    //cout<<"EMPTY";
    for(int i = 0; i<m ; i++)
        if(arctic[i]==1){
            cout<<i<<' ';
            flag = 1;
        }
    if(flag == 0)
        cout<<"EMPTY"<<'\n';
    else
        cout<<'\n';
    sort(v.rbegin(), v.rend());
    while(!v.empty()){
        cout<<v.back().first<<' '<<v.back().second<<'\n';
        v.pop_back();
    }
    //if(flag == 0)
       // cout<<"EMPTY"<<'\n';
} 
