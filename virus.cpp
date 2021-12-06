#include <iostream>
#include <iterator>
#include <list>

using namespace std;



int main(){
    list<int> ans;
    list<int>::iterator itr;
    int n,m,x,y;
    cin >> n >> m;
    for (int i=0; i<n; i++){
        cin >> x;
        ans.push_back(x);
    }
    itr = ans.begin();
    for (int i=0; i<m; i++){
        cin >> x;
        if(x == 1){
            itr = ans.begin();
        }
        else if(x == 2){
            itr++;
            if(itr == ans.end()){
                itr = ans.begin();
            }
        }
        else if(x == 3){
            cin >> y;
            ans.insert(itr,y);
            }
        else{
            cin >> y;
            itr++;
            ans.insert(itr,y);
            itr--;
        }
    }
    for (itr = ans.begin(); itr != ans.end(); itr++){
        cout << *itr << "\n";
    }
    return 0;
}