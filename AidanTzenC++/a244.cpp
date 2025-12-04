#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    long long a, b, c;
    
    for (int i=0; i<n; i++){
        cin >> a >> b >> c;
        if(a==1){
            cout << b+c << "\n";
        }
        if(a==2){
            cout << b-c << "\n";
        }
        if(a==3){
            cout << b*c << "\n";
        }
        if(a==4){
            cout << b/c << "\n";
        }
    }
}