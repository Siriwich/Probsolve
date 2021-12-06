#include <stdio.h>
#include <math.h>
int main() {
  int N;
  scanf("%d",&N);
  int gifts[N];
  int value = 0;
  for(int i = 0; i < N ; ++i){
      scanf("%d",&gifts[i]);
  }
  for(int i = 0; i < N ; ++i){
      if(gifts[i]>0){
          value = value + gifts[i]
      }
  }
  printf("%d",value);
  return 0;
}