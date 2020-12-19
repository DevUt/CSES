#include <iostream>
#include <algorithm>

using namespace std;
int main(void){
    unsigned long long int n,m,k,given=0; cin >>n>>m>>k;
    unsigned long long int desired_size[n], available_size[m];
    for(int  i=0; i<n;i++)
        cin>>desired_size[i];
    for(int i=0;i<m;i++)
        cin>>available_size[i];
    sort(available_size,available_size+m);
    sort(desired_size,desired_size+n);

    for(int i=0,j=0;i<n && j<m;){
        if(desired_size[i]>=available_size[j]){
            if(desired_size[i]<=available_size[j]+k){
                given++; i++; j++;
            }else{
                j++; continue;
            }
       }else{
           if(desired_size[i]+k>=available_size[j]){
               given++;i++;j++;
           }else{
               i++;continue;
           }
       }
    }
    cout<<given;       
}

