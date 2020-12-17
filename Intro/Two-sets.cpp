#include <iostream>
#include <vector>

using namespace std;

int main(void){
    unsigned long int n; cin>>n;
    int sum = n*(n+1)/2;
    
    vector <int> v1,v2;

    if(sum%2 == 0){
        cout<<"YES\n";
        if(n%4 ==0){
            for(int i=1;i<=n/4;i++)
                v1.push_back(i);
            for(int i=n;i>3*n/4;i--)
                v1.push_back(i);
            for(int i=n/4+1;i<=3*n/4;i++)
                v2.push_back(i);
        }else if(n % 4 == 3){
            vector <int> v;
            v1.push_back(1); v1.push_back(2);
            v2.push_back(3);

        if( n !=3 ){
            for(int i=4;i<=n;i++)
                v.push_back(i);
            for(int  i=0;i<(n-3)/4;i++){
                v1.push_back(v[i]);
                v1.push_back(v[v.size()-1-i]);
            }
            for (int i = 4 +(n-3)/4; i <=n -(n-3)/4; i++){
                v2.push_back(i);
            }
        }    

        }
        cout<<v1.size()<<"\n";
        for(int i=0;i<v1.size();i++)
            cout<<v1[i]<<" ";

        cout<<"\n"<<v2.size()<<"\n";
        for(int i=0;i<v2.size();i++)
            cout<<v2[i]<<" ";        
    }else 
        cout<<"NO";
}