#include <iostream>
using namespace std;

int main(){
    string s;
    while(cin >> s){
        int Max = 1;
        int MMax = 0;
        int pos = 0;
        int now_pos;
        char max_a;
        for(int i=1; i < s.size(); i++){
            if(s[i]==s[i-1]){
                Max ++;
                if(Max > MMax){
                    MMax = Max;
                    max_a = s[i];
                }
            }else{
              pos = 0;
              
            }
        }
        
        cout << s.replace(now_pos, MMax, max_a);
    }
}