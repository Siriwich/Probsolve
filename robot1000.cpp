#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string order;
    cin >> order;
    char order_array[order.length()];
    int n = sizeof(order_array);
    for (int i=0; i<sizeof(order_array); i++){
        order_array[i] = order[i];
    }
    int ans[] = {0,0};
    for (int i=0; i<n+1; i++){
        if (order_array[i] == 'N'){
            ans[1] = ans[1]+1;
        }
        else if (order_array[i] == 'S'){
            ans[1] = ans[1]-1;
        }
        else if (order_array[i] == 'E'){
            ans[0] = ans[0]+1;
        }
        else if (order_array[i] == 'W'){
            ans[0] = ans[0]-1;
        }
        else if (order_array[i] == 'Z'){
            ans[0] = 0;
            ans[1] = 0;
        }
    }
    for (int i=0; i<2; i++){
        cout << ans[i] << " ";
    }


    return 0;
}