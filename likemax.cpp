#include <iostream>
#include <map>
#include <list>
using namespace std;

const int max_likes = 100010;

list <int> likes[max_likes];

int main(){
    map <int,int> like;
    int n,a,b,champ;
    int like_max=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a == 1){
            cin >> b;
            like[b]++;
            if(like[b] >= like_max){
                like_max++;
                champ = b;
                cout << b << '\n';
            }
            else{
                cout << champ << '\n';
            }
            likes[like[b]].push_back(b);
        }
        else if(a == 0){
            cin >> b;
            like[b]--;
            if(like[b] == like_max){
                champ = likes[like_max].back();

                cout << champ << '\n';
            }
            else{
                like_max--;
                champ = likes[like_max].back();
                cout << champ << '\n';
            }
        }
    }
    return 0;
}