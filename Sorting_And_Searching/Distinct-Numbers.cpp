#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    unsigned int n; cin>>n;
    unsigned long x[n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    
    sort(x,x+n);
    int diff=1;
    for(int i=1;i<n;i++){
        if(x[i-1]==x[i])
            continue;
        else
            diff++;
    }
    cout<<diff;
}