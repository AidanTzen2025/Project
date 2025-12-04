// 要空白的輸入
// 轉換成字串流
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    // 要空白的輸入
    string s1="aaa bbb";
    string s2;
    getline(cin, s2);
    cout << s2 << "\n";

    // 轉換成字串流
    stringstream ss(s2);
    string word;
    while(ss >> word){
        cout << word << "\n";
    }

}