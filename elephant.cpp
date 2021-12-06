#include <iostream>

using namespace std;

const int MAX_N = 100010;
int ans[MAX_N];
int banana[MAX_N];

int choose(int x){
    int i,j;
    i = ans[x-1];
    j = ans[x-3] + banana[x];
    return max(i,j);
}

int main(){
    int n;
    cin >> n;
    ans[0] = 0;
    ans[1] = 0;
    for(int i=0; i<n; i++){
        cin >> banana[i];
    }
    ans[2] = banana[2];
    for(int i=3; i<n; i++){
        ans[i] = choose(i);
    }
    cout << ans[n-1];
    return 0;
}