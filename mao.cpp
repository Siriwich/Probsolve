#include <stdio.h>

int main() {
  int price[3];
  for(int i = 0; i < 3 ; ++i){
      scanf("%d",&price[i]);
  }
  int N;
  scanf("%d",&N);
  int stock[N];
  for(int i = 0; i < N ; ++i){
      scanf("%d",&stock[i]);
  }
  int ans[]={0,0,0};
  for(int i = 0; i < N ; ++i){
      if (stock[i] == 1){
          ans[0] = ans[0] + price[0];
      }
      else if(stock[i] == 2){
          ans[1] = ans[1] + price[1];
      }
      else{
          ans[2] = ans[2] + price[2];
      }
  }
  if (ans[0]<=ans[1] && ans[0]<=ans[2]){
      printf("%d",ans[0]);
  }
  else if (ans[1]<=ans[0] && ans[1]<=ans[2]){
      printf("%d",ans[1]);
  }
  else {
      printf("%d",ans[2]);
  }
  return 0;
}