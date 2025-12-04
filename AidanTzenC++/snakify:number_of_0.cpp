#include<iostream>
using namespace std;

int main(){
    int ans=0;
    int n;
    cin >> n;
    int a;


    for(int i=0; i<n;i++){
        cin >> a;
        if(a == 0){
            ans = ans+1;
        }
    }

    cout << ans << "\n";
}