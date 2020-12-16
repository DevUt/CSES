#include <iostream>
using namespace std;

int main(void){
    unsigned  int t; cin>>t;
    while(t--){
        unsigned long long int row, column; cin>>row>>column;

        if(column >= row){
           if((column % 2) !=0) cout<<((column)*column - row +1)<<endl;
           else cout<<((column-1)*(column-1) + row)<<endl;

        }else {
            if((row % 2) !=0) cout<<((row-1)*(row-1) + column)<<endl;
            else cout<<((row)*(row) - column+1)<<endl;
        }
    }
}