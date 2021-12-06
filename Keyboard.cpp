#include <iostream>
#include <string.h>
#include <iterator>
#include <list>

using namespace std;

int main(){
    list<char> ans;
    list<char>::iterator itr;
    string text;
    cin >> text;
    char text_array[text.length()];
    int size = sizeof(text_array);
    for(int i=0; i<size; i++){
        text_array[i] = text[i];
    }
    itr = ans.end();
    for(int i=0; i<size; i++){
        if (text_array[i] == '['){
            itr = ans.begin();
        }
        else if(text_array[i] == ']'){
            itr = ans.end();
        }
        else{
            ans.insert(itr,text_array[i]);
        }

    }
    for(auto i=ans.begin(); i!=ans.end(); i++){
        cout << *i;
    }
    return 0;
}