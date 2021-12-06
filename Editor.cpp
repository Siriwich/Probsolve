#include <iostream>
#include <string.h>
#include <iterator>
#include <list>

using namespace std;

int main(){
    list<string> abcd;
    int n,itr;
    char a;
    string b;
    cin >> n;
    itr = 0;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a == 'i'){
            cin >> b;
            abcd.insert(itr,b);
        }
        else if(a == 'l'){
            itr--;
        }
        else if(a == 'r'){
            itr++;
        }
        else if(a == 'b'){
            itr--;
            abcd.erase(itr);
        }
        else if(a == 'd'){
            if(itr != abcd.end()){
                abcd.erase(itr);
            }
        }
        for(auto i=abcd.begin(); i!=abcd.end(); i++){
            cout << *i << ' ';
        }
        cout << '\n';
    }
    


    return 0;
}