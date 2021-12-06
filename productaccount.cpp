#include <iostream>
#include <map>

using namespace std;

map <int,int> stock;

int main(){
    int m,select,a,b;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> select;
        if(select == 1){
            cin >> a >> b;
            stock[a] = stock[a] + b;
        }
        else if(select == 2){
            cin >> a;
            cout << stock[a] << '\n';
        }
        else{
            cin >> a >> b;
            if(b > stock[a]){
                cout << stock[a] << '\n';
                stock[a] = 0;
            }
            else {
                stock[a] = stock[a] - b;
                cout << b << '\n';  
            }
        }
    }


    return 0;
}
