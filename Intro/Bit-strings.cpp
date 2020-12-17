#include <iostream>
using namespace std;
int main(void){
    unsigned int n; cin>>n;
    unsigned long long ans=1;
    unsigned long long m = 1000000007;
    for(int i=1;i<=n;i++){
        ans = ans*2;
        ans = ans %m;
    }
    cout << ans;
}