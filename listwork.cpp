#include <iostream>
#include <iterator>
#include <list>

using namespace std;

int main(){
    int m,a;
    char o;
    list<int> mylist;
    list<int>::iterator itr;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> o;
        if(o == 'I'){
            cin >> a;
            mylist.push_front(a);
        }
        else if(o == 'D'){
            cin >> a;
            if(a <= mylist.size()){
                itr = mylist.begin();
                advance(itr,a-1);
                mylist.erase(itr);
            }
        }
        else{
            cin >> a;
            mylist.push_back(a);
        }
    }
    for(auto i=mylist.begin(); i!=mylist.end(); i++){
        cout << *i << '\n';
    }

    return 0;
}