#include <bits/stdc++.h>


using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n; 
    int k = pow(2,n);

    for (int j = 0; j < k; j++)
    {
        string s = bitset<32> (j).to_string();
        string result =""; 
        result.push_back(s[s.length()-n]);
        for(int i=1;i<n;i++){
            int index = (s.length()-n-1);
            int a = ((s[index+i]) - '0');
            int b = (s[index+i+1] - '0');
            result.push_back(a^b + '0');       
        }     
        cout<<result;
        cout<<"\n";
    }
}