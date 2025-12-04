#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 2;
    

    while(true){
        if(n % i == 0){
            break;
        }
        i++;
    }
    cout << i << "\n";

}