#include <iostream>
#include <list>

using namespace std;

void generate_output(int x){
    list<int> cards;
    list<int> dis_cards;
    int a,end;
    for (int i=0; i<x; i++){
        cards.push_back(i+1);
    }
    a = cards.size();
    while(a > 2){
        auto itr = cards.begin();
        int temp = *itr;
        cards.pop_front();
        dis_cards.push_back(temp);
        itr = cards.begin();
        temp = *itr;
        cards.pop_front();
        cards.push_back(temp);
        a--;
        if(a == 2){
            itr = cards.begin();
            temp = *itr;
            cards.pop_front();
            dis_cards.push_back(temp);
        }
    }
    end = dis_cards.back();
    cout << "Discarded cards: ";
    for(auto i=dis_cards.begin(); i!=dis_cards.end(); i++){
        if(*i == end){
            cout << *i ;
        }
        else{
            cout << *i << ", "; 
        }
        
    }
    end = cards.back();
    cout << "\nRemaining card: ";
    for (auto i=cards.begin(); i!=cards.end(); i++){
        if(*i == end){
            cout << *i ;
        }
        else{
            cout << *i << ", "; 
        }
    }
    cout << "\n";
}

int main(){
    int n,j=0;
    int m[1000];
    while(n!=0){
        cin >> n;
        m[j] = n;
        j++;
    }
    for(int i=0; i<sizeof(m); i++){
        if(m[i]==0){
            break;
        }
        generate_output(m[i]);
    }
    return 0;
}