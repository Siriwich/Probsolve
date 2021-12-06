#include <stdio.h>

int main(){
    int room_num;
    int cnt = 0;
    int ans;
    scanf("%d",&room_num);
    for(int i=1; i<1000; i++){
        cnt+=1;
        if(i*i>=room_num){
            break;
        }
    }
    if (cnt % 2 == 0){
        if (room_num % 2 ==0){
            ans = 2*cnt - 2;
        }
        else {
            ans = 2*cnt -3;
        }
    }
    else {
        if (room_num % 2 ==1){
            ans = 2*cnt - 2;
        }
        else {
            ans = 2*cnt -3;

        }
    } 
    
    printf("%d",ans);
    return 0;
}