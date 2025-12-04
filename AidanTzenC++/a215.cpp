#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    while(cin >> n1 >> n2){
        int ans = n1;
        int t = 1;
        for(int i = n1 + 1; ans <= n2; i++){
            //n1 = n1 + 1;
            ans = ans+i;
            t++;
        }

        cout << t << "\n";
    }
}