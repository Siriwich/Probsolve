#include <iostream>
#include <list>

using namespace std;

const int MAX_N = 300010;
list<int> adj[MAX_N];

int main(){
    int n,pud1,pud2,first;
    cin >> n;
    int ans[n];
    cin >> pud1 >> pud2;
    first = pud2;   
    for(int i=1; i<n; i++){
        cin >> pud1 >> pud2;
        adj[pud2].push_back(pud1);
    }

    return 0;
}