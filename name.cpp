#include <iostream>
#include <string.h>

using namespace std;



int main(){
    string text;
    string input;
    int count=0,t=0;
    cin >> text >> input;
    int l = text.length();
    int m = input.length();
    for(int i=0; i<m; i++){
        if(text[t] == input[i]){
            t++;
            if(t == l){
                t = 0;
                count++;
            }
        }
    }
    cout << count;
    return 0;
}