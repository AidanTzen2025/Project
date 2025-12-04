#include<iostream>
using namespace std;

int main(){
    int a, b;
    int ans = 0;
    cin >> a >> b;
    
    for(int i = a; i < b + 1; i++){
        if(i % 2 == 0){
            ans = ans + i;
        }
    }
    cout << ans;
}