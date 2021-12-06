#include <iostream>
using namespace std;
int main() {
  int N,i;
  cin >> N;
  int num[N];
  char sign[N-1];
  int value = 0;
  for(i = 0; i < N*2-1 ; i++){
      if(i%2==0){
          cin >> num[i/2];
      }
      else{
          cin >> sign[i/2];
      }
  }
  value = num[0];
  for(int i = 0; i < N-1 ; i++){
      if(sign[i] == '+'){
          value = value + num[i+1];
      }
      else{
          value = value - num[i+1];
      }
  }
  cout << value;
  return 0;
}