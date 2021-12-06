#include <iostream>

using namespace std;

const int max_n = 1010;

int n,l[max_n],day=1;
int patient[max_n][10][3];
int all_p[max_n];

int count_p(int x){
    int p_count=0;
    for(int i=1; i<x+1; i++){
        for(int j=0; j<l[i]; j++){
            int start = patient[i][j][2];
            int sick = patient[i][j][1];
            int pa = patient[i][j][0];
            if(sick -(x - start) > 0){
                p_count = p_count + pa;
            }
        }
    }
    return p_count;
}


int main(){
    cin >> n ;
    for(int i=0; i<n; i++){
        int c = 0;
        cin >> l[i+1];
        for(int j=0; j<l[i+1]; j++){
            int a,b;
            cin >> a >> b;
            if(a==0){
                break;
            }
            patient[day][c][0] = a;
            patient[day][c][1] = b;
            patient[day][c][2] = day;
            c++;
        }
        all_p[i] =  count_p(day);
        day++;
    }
    for(int i=0; i<n; i++){
        cout << all_p[i] << '\n'; 
    }
    return 0;
}

