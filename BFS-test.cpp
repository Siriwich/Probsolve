#include <iostream>
#include <vector>
#include <list>

using namespace std;

const int MAX_N = 100010;

int n,m,c;
vector<int> adj[MAX_N];
int deg[MAX_N];

void read_input(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        deg[i] = 0;
    }

    for(int i=0; i<m; i++){
        int u,v;
        cin >> u >> v;
        u--; v--;

        adj[u].push_back(v);
        adj[v].push_back(u);

        deg[u]++;
        deg[v]++;
    }
}

bool discover[MAX_N];
int layer[MAX_N];

void init(){
    for(int i=0; i<n; i++){
        discover[i] = false;
    }
}

void bfs(int s){
    discover[s] = true;
    layer[s] = 0;

    int lnum=0;
    list<int> c_layer;
    list<int> n_layer;
    c_layer.push_back(s);

    while(!c_layer.empty()){
        for(auto i=c_layer.begin(); i!=c_layer.end(); i++){
            int u =*i;
            for(int d=0; d<deg[u]; d++){
                int v = adj[u][d];
                if(!discover[v]){
                    n_layer.push_back(v);
                    discover[v] = true;
                    layer[v] = layer[u]+1;
                }
            }
        }
        c_layer = n_layer;
        n_layer.clear();        
    }

}

int main(){
    read_input();
    init();
    for(int s=0; s<n; s++){
        if(!discover[s]){
            bfs(s);
            c++;
        }
    }
    cout << c;
    return 0;
}