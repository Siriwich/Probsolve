#include <iostream>

using namespace std;

const int Max_n = 205;

int L,n,temp;
int bridge[Max_n][2];

void read_input(){
    cin >> L >> n;
    for(int i=0; i<n; i++){
        int a,b;
        cin >> bridge[i][0] >> bridge[i][1];
    }
}

int under(float x){
    int count = 0;
    for(int i=0; i<n; i++){
        if (x > bridge[i][0] && x < bridge[i][1]){
            count++;
        }
    }
    return count;
}

int main(){
    read_input();
    int max = 0;
    for (float i=0.5; i<L+0.5; i++){
        temp = under(i);
        if(max < temp){
            max = temp;
        }
    }
    cout << max;
    return 0;
}