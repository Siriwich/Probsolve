#include <iostream>
#include <map>

using namespace std;


int main(){
    map<int,int> robot;
    int n,m,a,x1,x2,ans=0,unava=-1;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a;
        robot[a] = i;
    }
    for(int i=0; i<m; i++){
        cin >> a;
        auto it = robot.lower_bound(a);
        if(it->second != unava){
            x1 = abs(it->first - a);
            it--;
            if(it->second != unava){
                x2 = abs(it->first - a);
            }
            else{
                it--;
                x2 = abs(it->first - a);
            }
            if(x1 < x2){
                ans = ans + x1;
                it++;
                unava = it->second;
            }
            else{
                ans = ans + x2;
                unava = it->second;
            }
        }
        else{
            it++;
            x1 = abs(it->first - a);
            advance(it,-2);
            x2 = abs(it->first - a);
            if(x1 < x2){
                ans = ans + x1;
                it++;
                unava = it->second;
            }
            else{
                ans = ans + x2;
                unava = it->second;
            }
        }
    }
    cout << ans;

    return 0;
}