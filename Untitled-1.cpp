#include <stdio.h>

int main() {
  int whmn[4];
  int ans1 = 0;
  int ans2 = 0;
  for(int i = 0; i < 4 ; ++i){
      scanf("%d",&whmn[i]);
  } 

  int M[whmn[2]+2];
  M[0] = 0;
  M[whmn[2]+1] = whmn[0];
  for(int i = 1; i < whmn[2]+1; ++i){
      scanf("%d",&M[i]);
  }

  int N[whmn[3]+2];
  N[0] = 0;
  N[whmn[3]+1] =whmn[1];
  for(int i = 1; i < whmn[3]+1; ++i){
      scanf("%d",&N[i]);
  }

  for(int i = 1; i < whmn[2]+2 ; ++i){
      for(int j = 1; j < whmn[3]+2 ; ++j){
          int temp = (M[i]-M[i-1])*(N[j]-N[j-1]);
          if( temp > ans1){
              ans2 = ans1;
              ans1 = temp;
         }else if (temp > ans2){
              ans2 = temp;
         }
    } 
      
  }
  
    
  printf("%d %d",ans1,ans2);

        
  return 0;
}