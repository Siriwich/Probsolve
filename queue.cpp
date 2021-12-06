#include <iostream>
using namespace std;

int main(){
    int L,n,i,j,temp=0,max=0;
    cin >> n;
    cin >> L;
    int all_cus[n];
    int my_cus[L];
    int ans[L];
    for (i=0; i<n; i++){
        cin >> all_cus[i];
    }
    for (i=0; i<L; i++){
        cin >> my_cus[i];
    }
    for (i=0; i<L; i++){
        for (j=0; j<my_cus[i]-1; j++){
            if(all_cus[my_cus[i]-1] <= all_cus[j]){
                temp = all_cus[j];
            }
            if(max<temp){
                max = temp;
            }
        }
        if (max >= all_cus[my_cus[i]-1]){
            ans[i] = max - all_cus[my_cus[i]-1] + 1;
        }
        else{
            ans[i] = 0;
        }
    }
    for (i=0; i<L; i++){
        cout << ans[i] << "\n";
    }





    return 0;
}