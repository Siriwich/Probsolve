#include <iostream>
using namespace std;

int main(){
    int L,n,i,sum=0,sum_a=0,ans=0;
    cin >> L;
    cin >> n ;
    for (i=0; i<L; i++){
        sum = sum + (i+1)*(i+1);
    }
    sum = sum - n;
    for (i=L; i>0; i--){
        if (sum <= 0){
            break;
        }
        sum_a = sum_a + i*i;
        ans = ans+1;
        if(sum <= sum_a){
            break;
        }
    
    }
    cout << ans;    



    return 0;
}