#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main(void){
    int n; cin>>n;
    array <int ,2> a[n];
    for(int i=0; i<n;i++){
        cin>>a[i][1]>>a[i][0];
    }
    sort(a,a+n);
    int ans=0,last=0;
    for(int i=0;i<n;i++){
        if(a[i][1]>=last){
            ans++;
            last=a[i][0];
        }
    }
    cout<<ans;
}