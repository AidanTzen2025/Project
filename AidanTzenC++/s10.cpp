#include<iostream>
using namespace std;

int main(){
    int n;
    
    cin >> n;

    if(n == 0){
        cout << 0;
    }else{
        int x1 = 0;
        int x2 = 1;
        for(int i=1; i<n; i++){
            int temp;
            temp = x1;
            x1 = x2;
            x2 = temp + x2;
        }
        cout << x2;
    }
}