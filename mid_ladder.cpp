#include <iostream>

using namespace std;

int main(){
int m,n,c=0;
cin >> n >> m;
int Board[n+1];
for (int i=1; i<n+1; i++){
    cin >> Board[i];
}
int Dice[m+1];
for (int i=1; i<m+1; i++){
    cin >> Dice[i];
}
for (int i=1; i<m+1; i++){
    c = c + Dice[i];
    if(c > n){
        c = n;
        break;
    }
    else if(c >= 0){
        c = c + Board[c];
    }
    else{
        c = 0;
    }
}
if (c < 0){
    c = 0;
}

cout << c;
return 0;
}