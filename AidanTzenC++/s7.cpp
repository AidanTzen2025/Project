#include <iostream>
using namespace std;

int main(){
    int n = 0;
    int m = n;
    int a = 0;
    while(cin >> n){
        if(n > m){
            m = n;
        }
        if(n == 0){
            break;
        }
        a++;
    }

    cout << a << "\n";
}