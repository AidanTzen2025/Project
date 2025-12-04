#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int start = s.find('h');
    int end = s.rfind('h');
    int l =  end- start;

    s.erase(start, l+1);
    cout << s;
}
