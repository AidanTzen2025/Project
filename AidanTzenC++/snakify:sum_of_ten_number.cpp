#include <iostream>
using namespace std;

int main(){
    int sum=0;
    int a=0;
    
    for (int i = 1; i< 11;i++){
        cin >> a;
        sum = sum + a;
    }
    
    cout << sum;
}