#include <bits/stdc++.h>
using namespace std; typedef long long ll;

ll sum_s(vector<int> data){
    ll ans =0 ;
    for(auto value : data)
        ans += value;
}

int main() {
    ios_base::sync_with_stdio(false);
 //    cin.tie(NULL);
    int n; cin>>n;
     
    ll p[20];
    ll sum = 0; 
    for(int i=0; i<n;i++){
        cin>>p[i];
        sum += p[i];
    }
    if(!(sum&1)){
        cout<<0<<"\n";
        continue;
    }
}
