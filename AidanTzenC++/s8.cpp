#include <iostream>
using namespace std;

int main(){
    int i;
    int f = 0;
    int s = 0;
   
    while(cin >> i){
        if(i>f){
            s = f;
            f = i;
        }
        if(i>s & i<f){
            s = i;
        }
        if(i == 0){
            break;
        }
    }
    
    cout << s;
}