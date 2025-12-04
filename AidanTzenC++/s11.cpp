#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x1 = 0;
    int x2 = 1;
    int Ans = 0;
    
    if(n==0){
        cout << 0;
    } else{
        while(x2 <= n){
            Ans++;
            int temp = x1;
            x1 = x2;
            x2 = temp +x2;
        }
    }
 
    cout << Ans;
}