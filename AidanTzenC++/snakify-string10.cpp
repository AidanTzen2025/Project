#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int start = s.find('h');
    int end = s.rfind('h');
    int l = end - start - 1;
   
    string s2 = s.substr(start +1, l);
    for(int i = 0; i < s2.size(); i++){
        if(s2[i] == 'h'){
            s2.replace(i, 1, "H");
        }
    }

    s.replace(start+1, l, s2);
    cout << s << endl;
}