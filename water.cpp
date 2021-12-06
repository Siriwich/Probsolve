#include <iostream>

using namespace std;

int main(){
    const int factor = 10;
    int n,ans = 0,dw;
    cin >> n;
    int water_level[n];
    for(int i=0; i<n; i++){
        cin >> water_level[i];
    }
    for(int i=0; i<n-1; i++){
        dw = water_level[i] - water_level[i+1];
        if(dw > 10){
            if(dw > 70){
                ans = ans + 700;
            }
            else{
                ans = ans + dw * factor;
            }
        }
    }
    cout << ans;



    return 0;
}