#include <iostream>
#include <map>

using namespace std;
map<int,int> price;

int main(){
    int n, a, b, c, ans = 0, range, sum = 0;
    cin >> n >> a >> b;
    for(int i=0; i<n; i++){
        cin >> c;
        price[c]++;
    }
    for(auto itr = price.begin();itr != price.end(); itr++){
        sum = 0;
        range = b - (itr->first);
        auto it = itr;
        it++;
        while(it->first <= range){
            if((it->first+itr->first) >= a){
                sum = sum + price[it->first];
            }
            if(it->first >= range){
                break;
            }
            it++;
        }
        sum = sum * (itr->second);
        ans = ans + sum;
        if(itr->first >= a){
            break;
        }
    }
    cout << ans;
    return 0;
}