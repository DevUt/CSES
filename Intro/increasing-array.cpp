#include <iostream>

using namespace std;
int main(void){
    unsigned int n; cin>>n;
    unsigned long long arr[n];
    unsigned long long min = 0;

    for (unsigned int i=0;i <n;i++)
         cin>>arr[i];

    for (unsigned int i=1; i<n;i++){
        if(arr[i-1]>arr[i]){
            min += (arr[i-1]-arr[i]);
            arr[i] +=(arr[i-1]-arr[i]);
        }        
    }
    cout<<min;
}