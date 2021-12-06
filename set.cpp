#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main(){
    int n,m,a,b,c,x1,x2;
    set<int> s1;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a;
        s1.insert(a);
    }
    for(int i=0; i<m; i++){
        cin >> a;
        auto it = s1.end();
        it--;
        if(a < *s1.begin()){
            cout << *s1.begin();
        }
        else if(a > *it){
            cout << *it;
        }
        else{
            it = s1.lower_bound(a);
            c = *it;
            x1 = abs(a - c);
            it--;
            b = *it;
            x2 = abs(a - b);
            if(x1 < x2){
                cout << c << '\n';
            }
            else{
                cout << b << '\n';
            }
        }
    }
    return 0;
}