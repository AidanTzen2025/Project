#include <iostream>
using namespace std;

int main(){
    string s;
    while(cin >> s){
        int Max = 1;
        int now_pos;
        string Ans = "";
        
        for(int i=1; i < s.size(); i++){
            if(s[i]==s[i-1]){
                Max ++;
            }else{
              if(Max==1){
                Ans.append(s[i]);
              }
              if(Max==2){
                Ans.append();
              }
            
              Max = 0;
            }
        }

    }
}