#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    string instruction;
    getline(cin, instruction);
    int mouse = 0;

    for(int i=0; i<instruction.size(), i++){
        if(s[i]=='0'){
            mouse = 0;
        }else if(s[i]=='$'){
            mouse = instruction.size();
        }
    }
}