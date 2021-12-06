#include <iostream>
#include <math.h>

using namespace std;

int prime[200000];

bool isPrime(int x){
    if(x == 1) return false;
    for(int i = 2;i<=sqrt(x);i++){
          if(x % i == 0) return false;
    }
    return true;
}

int main(){
    int L,R,c=0,temp,ans=0;
    cin >> L >> R;
    for(L; L<R; L++){
        if(isPrime(L)){
            prime[c] = L;
            c++;
        }
    }
    for(int i=0; i<c; i++){
        temp = prime[i+1] - prime[i];
        if(temp == 2){
            ans++;
        } 
    }
    cout << ans;
    return 0;
}