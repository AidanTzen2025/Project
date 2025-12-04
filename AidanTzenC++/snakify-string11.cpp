#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    string Ans = "";
    
    for(int i=0; i < s.size(); i++){
        if(i%3 != 0){
            Ans.insert(Ans.end(), s[i]);
        }
    }

    cout << Ans;
}