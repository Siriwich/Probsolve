#include <iostream>

using namespace std;

const int MAX_N = 100010;

int ans[MAX_N][2];
int pro[MAX_N][2];

int choose(int x){
    int a,b,c,d;
    if(ans[x][1] == 0){
        a = ans[x-1][0];
        b = ans[x-1][0] + pro[x][1];
        c = ans[x-2] + pro[x][0];
    }


}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> pro[i][0] >> pro[i][1];
    }
    if((pro[0][0]<0) && (pro[0][1] < 0)){
        ans[0][0] = 0;
        ans[0][1] = 2;
    }
    else{
        if(pro[0][0] > pro[0][1]){
            ans[0][0] = pro[0][0];
            ans[0][1] = 0;
        }
        else{
            ans[0][0] = pro[0][1];
            ans[0][1] = 1;
        }
    }
    for(int i=1; i<n; i++){
        ans[i][0],ans[i][1] = choose(i);
    }
    cout << ans[n-1];
    return 0;
}