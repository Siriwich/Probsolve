#include <iostream>
#include <list>
using namespace std;

int main(){
    int n,m,i,pos;
    cin >> n >> m;
    int all[n+m+m];
    int shoot[m];
    list<int> balls; 
    for (i=0; i<n+m+m; i++){
        cin >> all[i];
    }
    for (i=0; i<n; i++){
        balls.push_back(i);
    }
    for (i=0; i<m; i++){
        shoot[i] = all[n+(i*2+1)];
    }
    for (i=n; i<n+m; i++){
        pos = shoot[i-n];
        auto j = balls.begin();
        for (int k=0; k<pos; k++){
            j++;
        }
        balls.insert(j,i);
    }
    for (auto j=balls.begin(); j!=balls.end(); j++){
        cout << *j << "\n";
    }
    return 0;
}