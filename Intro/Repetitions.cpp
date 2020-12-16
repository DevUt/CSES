#include <iostream>
#include <string>

using namespace std;
int main (void){
    long long int max=0,curr=0;
    string ch; cin>>ch; long long int len = ch.length();

    for (long long int  i = 1; i < len; i++){
        if(ch[i]==ch[i-1])
            curr++;
        else 
            curr =0;
        if(curr > max)
            max = curr;
    }

    cout<<max+1;
    
}