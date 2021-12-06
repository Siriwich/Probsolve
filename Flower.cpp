#include <iostream>
using namespace std;

int main(){
    int L;
    cin >> L;
    int n;
    cin >> n ;
    int ans;
    int sum = 0;
    for (int i=0; i<100; i++){
        sum = sum + L*(L+1)/2 + i*L*L;
        if (n <= sum){
            ans = i+1;
            break;
        } 
    }
    cout << ans;
  

    return 0;
}