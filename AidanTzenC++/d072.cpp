#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        int a;
        cin >> a;
        if((a % 4 == 0 & a % 100 != 0) || a % 400 ==0){
            cout << "Case " << i << ": a leap year" << "\n";
        } else{
            cout << "Case " << i << ": a normal year" << "\n";
        }
    }
}