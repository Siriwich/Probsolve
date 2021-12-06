#include <iostream>

using namespace std;

const int MAX_N = 100010;

int sp,n,g = 0;
int s[MAX_N];
bool discover[MAX_N];

void read_input(){
    cin >> n;
    for(int i=1; i<n+1; i++){
        cin >> s[i];
    }
}

void init(){
    for(int i=1; i<n+1; i++){
        discover[i] = false;
    }
}

void group_search(int x){
    if(s[x] == sp){
        if(!discover[x]){
            discover[x] = true;
            g++;
        }
    }
    else if(!discover[x]){
        discover[x] = true;
        group_search(s[x]);
    } 
}


int main(){
    read_input();
    init();
    for(int i=1; i<n+1; i++){
        sp = i;
        group_search(i);
    }
    cout << g;
    return 0;
}