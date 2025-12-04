// string用法
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "1234567890";
    string s2 = "abcdefg";
    
    s.append("n");
    cout << s << "\n";
    
    char c = s2.at(0); //a
    cout << c << "\n";
    
    s2.erase(4,2); //ef被刪掉
    cout << s2 << "\n";

    cout << s.length() << "\n";
    cout << s.size() << "\n";
    
    s.replace(5, 5, "12345"); 
    cout << s << "\n";

    string sub = s.substr(0,7); //1234512
    cout << sub;

    s.swap(s2);

}