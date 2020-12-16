#include <iostream>
using namespace std;

// This problem considers both  the knights to be identical

int main(void){
    long long int n; cin>>n;

    for(long long int i=1; i<=n; i++){
       long long  int total_ways = i*i*(i*i-1)/2;
        long long int ways_to_attack = 4*(i-1)*(i-2);
        cout<<total_ways-ways_to_attack<<"\n";
    }

}