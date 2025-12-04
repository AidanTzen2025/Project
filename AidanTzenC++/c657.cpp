#include <iostream>
using namespace std;

int main(){
    string s;
    while(cin >> s){
        int Max = 1;
        int MMax = 0;
        char pre;
        char maxs;
        for(int i=1; i < s.size(); i++){
            pre = s[i-1];
            if(s[i] == pre){
                Max++;
                if(Max > MMax){
                    MMax = Max;
                    maxs = s[i];
                }
            }else{
                Max = 1;
            }
        }
        cout << maxs << ' ' << MMax << "\n";
    }
}
