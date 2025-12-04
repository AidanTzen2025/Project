#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            s.replace(i, 1, "one");
            i += 2;
        }
    }
    
    cout << s;
}