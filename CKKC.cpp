#include <iostream>

using namespace std;

int main(){
    int x,c,n=-1;
    cin >> x;
    while(n != 0){
        cin >> n;
        c++;
    }
    c = c - 1;
    n = x - 2558 - c;
    if (n % 2 == 0){
        cout << "K";
    }
    else {
        cout << "C";
    }
    return 0;
}