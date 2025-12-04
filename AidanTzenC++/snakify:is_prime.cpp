#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m = 0;

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            m = 1;
        }
    }

    if(m==1){
        cout << "COMPOSITE";
    } else{
        cout << "PRIME";
    }

}
