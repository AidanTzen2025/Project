#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int ans = 0;
    
    for(int i = a; i < b + 1; i++){
        if((i % 4 == 0 && i % 100 != 0) || i % 400 == 0){
            ans++;
        }
    }
    
    cout << ans;

}