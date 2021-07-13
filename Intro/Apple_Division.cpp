#include <bits/stdc++.h>
// #pragma GCC target("fpmath=387")
#pragma GCC optimization ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("Ofast")
#define ull unsigned long long 
#define ll  long long
#define MOD 1000000007

int main (){
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_case=1; 
    cin>>test_case;
    while(test_case--){
        int inp; cin>>inp;
        vector<int> v; int sum=0;
        for(int i=0;i<inp;i++){
            int l; cin>>l;
            v.push_back(l);
            sum += 0;
        }

        if(!(sum&1)){
            cout<<0<<"\n";
            continue;
        }    
    }
}