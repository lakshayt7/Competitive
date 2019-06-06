#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

struct list_node{
    struct list_node *next;
    struct list_node *prev;
    int mark = 0;
    int value;
    struct list_node *pi;
};

struct list_node *root;


int S[20000];
int topp = -1;

void DFS_Search(int m, int p, int colour[], struct list_node *top[], int d[], int low[], int instack[], int comp[]){
    static int depth = 0;
    colour[p] = 1;
    depth++;
    low[p] = depth;
    d[p] = depth;
    topp++;
    S[topp] = p;
    instack[p] = 1;
    struct list_node *t = top[p];
    int counter = 0;
    while(t!=NULL){
    	cout<<"counter = "<<counter<<'\n';
        if(colour[t->value] == 0){
            //DFS_Search(m, t->value, colour, top, d, low, instack, comp);
            low[p] = min(low[p], low[t->value]);
        }
        else if(instack[t->value] == 1)
            low[p] = min(low[p], d[t->value]);
        t = t->next;
    }
    if(low[p] == d[p]){
    	while(S[topp] != p){
    		instack[S[topp]] = -1;
    		comp[S[topp]] = p;
    		cout<<S[topp]<<' ';
    		topp--;
		}
		cout<<S[topp]<<'\n';
		instack[S[topp]] = -1;
		topp--;
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m;
    int n;
    int k;
    int p;
    int q;
    int B[m];
    cin>>m>>n>>k;
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
    /*for(int i = 0 ; i < n ; i ++ )
    	cin>>B[i];*/
    for(int i = 0 ; i < n ; i++){
        cin>>p>>q;
        deg[p]++;
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
    }
    int low[m];
    int d[m];
    int comp[m];
    int colour[m];
    int instack[m];
    for(int  i = 0 ; i < m ; i++){
        colour[i] = 0;
        d[i] = -1;
        low[i] = -1;
        instack[i] = -1;
        comp[i] = i;
    }
    struct list_node *t;
    int depth = -1;
    /*for(int i = 0; i < m ;i ++){
        if(d[i] == -1)
            DFS_Search(m, i, colour, top, d, low, instack, comp);
    }*/
    
} 
