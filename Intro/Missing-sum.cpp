#include <iostream>
#include <cmath> 

using namespace std;
int main (void){
    long long int sum_c; long long int n; cin>>n;
    sum_c = n*(n+1)/2;
    long long int sum=0;
    long long x=0;
    for (long long int i=0; i<n-1;i++){
        cin>>x;
        sum += x;
    }
    cout<<abs(sum_c - sum);
}