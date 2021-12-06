#include <iostream>
#include <list>

using namespace std;

const int max_m = 100010;  

int m;
list<int> height;
int ans[max_m];
bool discover[max_m];

void init(){
    for(int i=0; i<max_m; i++){
        ans[i] = 0;
        discover[i] = false;
    }
}

int main(){
    init();
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int max=0;
    list<int> all;
    cin >> m;
    int a;
    for(int i=0; i<m; i++){
        cin >> a;
        height.push_back(a);
        if(a > max){
            max = a;
        }
    }
    for(int i=0; i<max; i++){
        int count = 0;
        int c = 0;
        for(auto j=height.begin(); j!=height.end(); j++){
            cout << '1' << ' ';
            if(*j > i){
                count++;
                c = 0;
            }
            else{
                c++;
                if(c > 1){
                    auto itr = height.end();
                    itr-- ;
                    if (j!=itr){
                        height.erase(j);
                        c=0;
                    }
                }
                if(count != 0){
                    all.push_back(count);
                    count = 0;
                }
            }
        }
        if(count != 0){
            all.push_back(count);
        }
    }
    int count = 0;
    for(auto i=all.begin(); i!=all.end(); i++){
        ans[*i]++;
        if(!discover[*i]){
            discover[*i] = true;
            count++;
        }
    }
    cout << count << '\n';
    for(int i=0; i<max_m; i++){
        if(ans[i] != 0){
            cout << i << ' ' << ans[i] << '\n';
        }
    }
    return 0;
}