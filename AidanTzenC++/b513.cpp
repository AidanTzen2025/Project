#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        int k = 0;
        for (int j = 2; j < a; j++){
            if(a % j == 0){
                k = 1;
                break;
            }
        }
    
    if(k == 0){
        cout << "Y" << "\n";
    } else{
        cout << "N" << "\n";
    }
    }
}