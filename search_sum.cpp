#include <iostream>
#include <map>
#include <iterator>

using namespace std;

map <int,int> price;
map <int,int>::iterator itr;

int main(){
    int N,K,money,a,sum=0;
    cin >> N >> K;
    int book[N];
    int ans[K];
    price.insert(pair<int,int>(0,0));
    for(int i=0; i<N; i++){
        cin >> book[i];
    }
    for(int i=1; i<N+1; i++){
        int min = 1000000000;
        for (int j=0; j<N+1-i; j++){
            sum=0;
            for(int k=j; k<j+i; k++){
                sum = sum + book[k];
            }
            if(sum < min){
                min = sum;
            }
        }
        price.insert(pair<int,int>(min,i));
    }
    for (int i=0; i<K; i++){
        cin >> a;
        itr = price.lower_bound(a);
        while(itr->first > a){
            itr--;
        }
        ans[i] = itr->second;
    }
    for(int i=0; i<K; i++){
        cout << ans[i] << '\n';
    }
    return 0;
}