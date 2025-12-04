#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '@'){
            s.replace(i, 1, "");
            i-=1;
        }
    }
    
    cout << s;
}