#include <iostream>
#include <map>

using namespace std;

map<int,int> r1;
map<int,int> r2;
map<int,int> r3;
map<int,int> r4;


int main(){
    int n,a,c1,c2,c3,c4,la,lb,champ,sec_champ,ca,cb,cs1,cs2;
    cin >> n;
    for(int i=0; i<4; i++){
        int max = 0;
        for(int j=i*n; j<(i+1)*n; j++){
            cin >> a;
            if(i==0){
                r1[j] = a;
                if(a>max){
                    max = a;
                    c1 = j;
                }
            }
            else if(i==1){
                r2[j] = a;
                if(a>max){
                    max = a;
                    c2 = j;
                }
            }
            else if(i==2){
                r3[j] = a;
                if(a>max){
                    max = a;
                    c3 = j;
                }
            }
            else if(i==3){
                r4[j] = a;
                if(a>max){
                    max = a;
                    c4 = j;
                }
            }
        }
    }
    if(r1[c1] > r2[c2]){
        ca = c1;
        cs1 = r1[c1];
        la = c2;
    }
    else{
        ca = c2;
        cs1 = r2[c2];
        la = c1;
    }
    if(r3[c3] > r4[c4]){
        cs2 = r3[c3];
        cb = c3;
        lb = c4;
    }
    else{
        cs2 = r4[c4];
        cb = c4;
        lb = c3;
    }
    if(cs1 > cs2){
        champ = ca;
        sec_champ = cb;
    }
    else{
        champ = cb;
        sec_champ = ca;
    }
    cout << champ+1 << ' ' << sec_champ+1 << ' ' << la+1 << ' ' << lb+1;
    return 0;
}