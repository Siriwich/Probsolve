#include <iostream>

using namespace std;

int cond[101][3];
int stat[3];
int pass[3];
int n,m,a,b,c,levels=1;
int main(){
    cin >> n >> m;
    for(int i=1; i<n; i++){
        cin >> cond[i][0] >> cond[i][1] >> cond[i][2];
    }
    for(int i=0; i<m; i++){
        if((pass[0] == 1) && (pass[1] == 1) && (pass[2] == 1)){
            if(levels < n){
            levels++;
            pass[0],pass[1],pass[2] = 0,0,0;
            }
        }
        cin >> a >> b >> c;
        stat[0] = a;
        stat[1] = b;
        stat[2] = c;
        if(stat[0] >= cond[levels][0]){
            pass[0] = 1;
        }
        if(stat[1] >= cond[levels][1]){
            pass[1] = 1;
        }
        if(stat[2] >= cond[levels][2]){
            pass[2] = 1;
        }
    }
    if((pass[0] == 1) && (pass[1] == 1) && (pass[2] == 1)){
            if(levels < n){
            levels++;
            pass[0],pass[1],pass[2] = 0,0,0;
            }
        }
    cout << levels;
    return 0;
}