#include <iostream>
#include <list>

const int MAX_N = 100010;

using namespace std;
list<int> trains[MAX_N];


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int m,a,b;
    char act;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> act;
        if(act == 'N'){
            cin >> a >> b;
            trains[b].push_back(a);
        }
        else if (act == 'M'){
            cin >> a >> b;
            trains[b].splice(trains[b].end(),trains[a]);
        }
    }
    for(int i=0; i<MAX_N; i++){
        for(auto itr=trains[i].begin(); itr!=trains[i].end(); itr++){
            cout << *itr << "\n";
        }
    }


    return 0;
}