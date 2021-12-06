#include <iostream>
#include <string.h>
#include <map>

using namespace std;

const int MAX_N = 100010;

int pole[MAX_N];
int question;
map<int,bool> can_do;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q,sum;
    string ans;
    cin >> n >> q;
    for(int i=0; i<n; i++){
        cin >> pole[i];
    }
    for(int i=1; i<n+1; i++){
        for(int j=0; j<n-i+1; j++){
            sum = 0;
            for(int k=j; k<j+i; k++){
                sum = sum + pole[j];
            }
        can_do[sum] = true;
        }
    }
    for(int i=0; i<q; i++){
        cin >> question;
        if(can_do[question]){
            ans = ans + 'Y';
        }
        else{
            ans = ans + 'N';
        }
    }
    cout << ans;


    return 0;
}