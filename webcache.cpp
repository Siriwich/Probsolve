#include <iostream>
#include <list>
using namespace std;

const int MAX_N = 1000010;

bool cac[MAX_N];
list<int> cache;

void init(){
    for(int i=0; i<MAX_N; i++){
        cac[i] = false;
    }
}

int main(){
    int M,N,req,temp,miss=0;
    cin >> N >> M;
    for(int i=0; i<M; i++){
        cin >> req;
        if(!cac[req]){
            miss++;
            if(cache.size() < N){
                cache.push_back(req);
                cac[req] = true;
            }
            else{
                auto itr = cache.begin();
                temp = *itr;
                cache.pop_front();
                cac[temp] = false;
                cache.push_back(req);
                cac[req] = true;
            }
        }
    }
    
    cout << miss;
    return 0;
}