#include<iostream>
using namespace std;

int main(){
    int n=1;
    int temp=0;
    int Ans=1;
    int maxAns = 1;
    while(n!=0){
        cin >> n;
        if(n == temp){
            Ans++;
            if(Ans>maxAns){
                maxAns = Ans;
            }
        }else{
            Ans =1;
        }
        temp = n;
    }
    
    cout<<maxAns;
}