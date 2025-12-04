#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int start = s.find('h');
    int end = s.rfind("h");
    int l = end- start-1;
    
    string s2 = s.substr(start+1, l);
    
    reverse(s2.begin(),s2.end());
    s.replace(start+1, l, s2);
    cout << s;
}