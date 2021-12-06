#include <stdio.h>
#include <math.h>
int main() {
  int N;
  scanf("%d",&N);
  int dart[N*2+2];
  int point = 0;
  for(int i = 2; i < N*2+2 ; ++i){
      scanf("%d",&dart[i]);
  }
  for(int i = 1; i < N+1 ; ++i){
      if(sqrt(dart[i*2]*dart[i*2]+dart[i*2+1]*dart[i*2+1])<=2){
          point = point + 5;
      }
      else if (sqrt(dart[i*2]*dart[i*2]+dart[i*2+1]*dart[i*2+1])<=4){
          point = point + 4;
      }
      else if (sqrt(dart[i*2]*dart[i*2]+dart[i*2+1]*dart[i*2+1])<=6){
          point = point + 3;
      }
      else if (sqrt(dart[i*2]*dart[i*2]+dart[i*2+1]*dart[i*2+1])<=8){
          point = point + 2;
      }
      else if (sqrt(dart[i*2]*dart[i*2]+dart[i*2+1]*dart[i*2+1])<=10){
          point = point + 1;
      }
  }
  
  printf("%d",point);
  return 0;
}
