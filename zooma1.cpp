#include <iostream>
#include <list>
#include <iterator>

using namespace std;

const int Max_n = 1000010;

int n,m;
list<int> balls;
int shoot[Max_n];
int itr[Max_n*2];

void read_input(){
    cin >> n >> m;
    for (int i=0; i<n; i++){
        balls.push_back(i);
    }
    for (auto i=balls.begin(); i!=balls.end(); i++){
        itr[*i] = i;
    }
    for (int i=0; i<m; i++){
        int u,v;
        cin >> u >> v;
        shoot[i] = v;
    }
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    read_input();
    

    return 0;
}