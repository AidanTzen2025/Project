#include <iostream>
using namespace std;

int main(){
    int n;
    int ans = 0;

    while(cin >> n){
        if(n == 0){
            break;
        }
        ans = ans + n;
    }
    cout << ans;
}