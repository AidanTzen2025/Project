#include <iostream>
using namespace std;

int main(){
    int i;
    int ans = 0;
    
    while(cin >> i){
        if(i == 0){
            break;
        }
        ans ++;
    }
    cout << ans;
}