#include <iostream>
#include <list>
#include <string.h>

using namespace std;

int main(){
    int n,m,ex=0,good=0,p,c=0;
    cin >> n >> m;
    list<char> map[n];
    list <char>smolmap[1000];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> p;
            map[i].push_back(p);
        }
    }
    while(!map->empty()){
        for(int i=0; i<n; i++){
            for(auto j=map[i].begin(); j!= map[i].end(); j++){
                if(*j == '#'){
                    map[i].pop_front();
                    break;
                }
                smolmap[c].push_back(*j);
                map[i].pop_front();
            }
        }
        c++;
    }
            
    
    return 0;
}