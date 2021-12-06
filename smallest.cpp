#include <iostream>
#include <map>
#include <iterator>

using namespace std;

const int MAX_N = 200000;
int N[MAX_N];
int Q[100000][2];
int mini[MAX_N];
map<int, int> mp;
map<int, int>::iterator itr;

int Q_1(int x){
    return mini[x-1];
}

int Q_2(int x, int y){
    if(x > mini[0]){
        return 0;
    }
    else{
        itr = mp.lower_bound(x);
        return (*itr).second;
    }
}

int main(){
    int n,q;
    cin >> n >> q;
    cin >> N[0];
    mini[0] = N[0];
    mp.insert({mini[0],0});
    for(int i=1; i<n; i++){
        cin >> N[i];
        if(N[i] < mini[i-1]){
            mini[i] = N[i];
            mp.insert({mini[i],i+1});
        }
        else{
            mini[i] = mini[i-1];
            itr = mp.find(mini[i]);
            itr->second = i+1;
        }
    }
    for(int i=0; i<q; i++){
        cin >> Q[i][0] >> Q[i][1];      
    }
    for(int i=0; i<q; i++){
        if(Q[i][0] == 1){
            cout << Q_1(Q[i][1]) << "\n";
        }
        else{
            cout << Q_2(Q[i][1],n-1) << "\n"; 
        }
    }
    return 0;
}