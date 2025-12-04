#include <iostream>
using namespace std;

int main(){
    int n = 0;
    int m = n;
    while (cin >> n){
        if(n > m){
            m = n;
        }
        if(n != 0){
            break;
        }
    }
    cout << m;
}