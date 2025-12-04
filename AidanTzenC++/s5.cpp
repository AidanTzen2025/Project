#include <iostream>
using namespace std;

int main(){
    int i;
    float n = 0;
    float s = 0;
    while(cin >> i){
        if(i == 0){
            break;
        }
        n++;
        s = s + i;
    }
    
    cout << s / n;
}