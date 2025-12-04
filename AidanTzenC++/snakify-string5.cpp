#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int N =0;
    int pos =0;
    for(int i=0; i < s.size(); i++){
        if(s[i] == 'f'){
            N ++;
            pos = i;
        }
    }
    
    if(N == 0){
        cout << -2;
    }else if(N == 1){
        cout << -1;
    }else{
        cout << s.find('f', s.find('f') + 1);
    }
}

