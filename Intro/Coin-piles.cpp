#include <iostream>
using namespace std;

int main(void){
    unsigned int t; cin>>t;
    while(t--){
        unsigned int a,b; cin>>a>>b;
        cout << ((a+b)%3==0 && 2*a>=b && 2*b>=a? "YES" : "NO")<<"\n";
    }
}