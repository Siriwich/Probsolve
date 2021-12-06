#include <iostream>
#include <map>

using namespace std;

int count[110];
map<int,int> score;


int main(){
    int n,m,a,b,ans=0;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> a >> b;
        count[a]++;
        if(score[a] < b){
            score[a] = b;
        }
    }
    for(int i=1; i<n+1; i++){
        if(count[i] <= 5){
            ans = ans + score[i]; 
        }
    }
    cout << ans;
    return 0;
}