#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main (void){
     string n; cin>>n;
     int c[26]{}; int ch=0;

     for(char d: n) //Freq array
        ++c[d-'A'];

    for(int i=0;i <26;i++)  //Check for more than one odd
        ch += c[i]&1;
    if(ch >1)   {cout<<"NO SOLUTION"; return 0;}

    string m; 
    for(int i=0;i<26;i++){
        if(c[i]%2==0)
            for(int j=0;j<c[i]/2;j++)
                m += (char)(i+'A');
    }
    cout<<m;

    for(int i=0;i<26;i++){
        if(c[i]%2)
            for(int j=0;j<c[i];j++)
                cout<<(char)('A'+i);
    }
    reverse(m.begin(),m.end());
    cout<<m;

}