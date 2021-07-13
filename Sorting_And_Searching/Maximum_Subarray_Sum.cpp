#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
// #pragma GCC target("fpmath=387")
//Use some pragma optimizations
// #pragma GCC optimization ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
// #pragma GCC optimize("Ofast")
//#define SLOWIO
// Shotern long variable names
#define ull unsigned long long 
#define ll  long long
#define ldb long double
#define MOD 1000000007
//Operations on bits
#define popcnt(x) __builtin_popcount(x)
#define popcntll(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctz(x) 
#define trailzll(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clz(x) // REMEMBER THE X SHOULD BE UNSIGNED
#define leadzll(x) __builtin_clzll(x)
#define oddparity(x) __builtin_parity(x)

//The namespaces
using namespace std;
using namespace __gnu_pbds;

#define all(x) begin(x), end(x)
#define uniq(x) x.erase(unique(all(x)),x.end());
template<typename T>             istream& operator>>(istream& is,  vector<T> &v){for (auto& i : v) is >> i;        return is;}
template<typename T>             ostream& operator<<(ostream& os,  vector<T>  v){for (auto& i : v) os << i << ' '; return os;}

ll lcm(long long a,long long b){     
    if(a>b)
        return (a/__gcd(a,b))*b;
    else
        return (b/__gcd(a,b))*a;    
} 

void solve(int test_case){
    ll max_so_far = LONG_LONG_MIN, max_ending_here = 0;
    ll n; cin>>n;
    vector<ll> v(n);
    cin>>v;

    for(auto& val : v){
        max_ending_here += val;
        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
        if(max_ending_here < 0)
            max_ending_here = 0;
    }
    cout<<max_so_far<<'\n';
    // cout<<"Case #"<<test_case<<": ";
}

int main (){
    #ifndef SLOWIO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    #endif 

    // ifstream cin("input.txt");
    // ofstream cout("output.txt");
    // std::cin.rdbuf(cin.rdbuf());
    // std::cout.rdbuf(cout.rdbuf());

    int test_case=1; 
    // cin>>test_case;
    for(int i=1;i<=test_case;i++){
        solve(i);
    }
}