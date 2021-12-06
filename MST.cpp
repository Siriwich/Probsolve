#include <iostream>  
#include <vector>  
#include <utility>  
#include <algorithm>  
using namespace std;  
const int MAX_N = 200010;  
int id[MAX_N];
int n,m;
pair <int, pair<int, int> > p[MAX_N];  
    

void init(){  
    for(int i = 0;i < MAX_N;++i)  
    id[i] = i;  
}  
    
int root(int x){  
    while(id[x] != x){
        id[x] = id[id[x]];  
        x = id[x];  
    }  
    return x;
}  
  

void union1(int x, int y){  
    int p = root(x);  
    int q = root(y);  
    id[p] = id[q];  
}  
   

int kruskal(pair<int, pair<int, int> > p[]){  
    int x, y;  
    int c, minimumCost = 0;  
    for(int i = 0;i < m;++i){  
        x = p[i].second.first;  
        y = p[i].second.second;  
        c = p[i].first;  
        if(root(x) != root(y)){  
            minimumCost += c; 
            union1(x, y);  
        }      
    }  
    return minimumCost;  
}  
    
int main()  
{  
    int a, b, w, ans;
    init();  
    cin >> n >> m;  
     

    for(int i = 0;i < m;++i){  
        cin >> a >> b >> w;  
        p[i] = make_pair(w, make_pair(a, b));  
    }  
     

    sort(p, p + m);  
    ans = kruskal(p); 
    cout << ans << endl;  
    return 0;  
}