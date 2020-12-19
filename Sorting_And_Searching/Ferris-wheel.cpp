#include <iostream>
#include <algorithm>
#pragma GCC optimize("Ofast")

using namespace std;
int main (void){
    typedef unsigned long long ll;
    int  n,x;
    cin>>n>>x;
    int weights[n];
    for(int i=0;i<n;i++)
        cin>>weights[i];
    sort(weights,weights+n);

    int ans=0;
    for(int i= 0,j= n-1;i<=j;){
        if((weights[i]+weights[j])<=x){
            i++;j--;
        }else{
            j--; 
        }
        ans++;
    }
    cout<<ans;
    
}