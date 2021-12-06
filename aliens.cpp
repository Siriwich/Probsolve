#include <iostream>

using namespace std;

int main(){
    int n,a,b,r,x,y,sum,count=0;
    cin >> n >> a >> b >> r;
    int std[n][2];
    for(int i=0; i<n; i++){
        cin >> std[i][0] >> std[i][1];
    }
    for(int i=0; i<n; i++){
        x = std[i][0] - a;
        y = std[i][1] - b;
        sum = x*x + y*y;
        if(sum <= r*r){
            count++;
        }
    }
    cout << count;

    return 0;
}