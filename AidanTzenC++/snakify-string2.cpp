#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int m;
    if(s.size() % 2 ==0){
        m = s.size() / 2;
    }else{
        m = (s.size() / 2.0) + 0.5; //2.0
    }
    
    string sub1 = s.substr(0, m);
    string sub2 = s.substr(m);
    cout << sub2 << sub1;
    cout << m;
}