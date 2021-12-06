#include <iostream>
#include <list>
#include <iterator>

using namespace std;

const int MAX_N = 100010;

int line[MAX_N];
int ans[MAX_N];
list<int> group;
list<int>::iterator itr;
int n;

void read_input(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> line[i];
    }
}

int min_max(list<int> x){
    int max = 0,min = 100000;
    for(auto i = x.begin(); i != x.end(); i++){
        if(*i < min){
            min = *i;
        }
        if(*i > max){
            max = *i;
        }
    }
    return (max-min);
}

int search_group(int x){
    if(x == n-1){
        int a = min_max(group);
        group.push_back(line[x]);
        int temp = min_max(group);
        return (ans[x-1]+temp-a);
    }
    if(group.size()>9){
        group.clear();
        group.push_back(line[x]);
        group.push_back(line[x+1]);
        ans[x+1] = abs(line[x] - line[x+1]) + ans[x-1];
        search_group(x);
    }
    if(ans[x] == 0){
        int a = min_max(group);
        int b,c;
        group.push_back(line[x]);
        int temp = min_max(group);
        b = abs(line[x] - line[x+1]) + ans[x-1];
        c = ans[x-1] + temp - a;
            if(a == temp){
                return ans[x-1];
            }
            else if(c > b){
                group.clear();
                group.push_back(line[x]);
                group.push_back(line[x+1]);
                ans[x+1] = abs(line[x] - line[x+1]) + ans[x-1];
            }
            else{
                return c;
            }
        }
    }

int main(){
    read_input();
    group.push_back(line[0]);
    group.push_back(line[1]);
    ans[1] = abs(line[0] - line[1]);
    for(int i=2; i<n; i++){
        ans[i] = search_group(i);
    }
    cout << ans[n-1] << '\n';
    return 0;
}