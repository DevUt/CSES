#include <iostream>
#include <set>
#include <array>

using namespace std;
int main(void) {
    int n; cin>>n;
    set <array<int,2>> s;
    for (int i=0; i<n;i++){
        int a,b; cin>>a>>b;
        s.insert({a,1});
        s.insert({b,-1});
    }

    int ans =0, count=0;
    for (auto a :s ){
        count+=a[1];
        ans=max(count,ans);
    }
    cout<<ans;
}