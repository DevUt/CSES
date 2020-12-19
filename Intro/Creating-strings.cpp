#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


using namespace std;
int main(void){
    string n; cin>>n;
    vector <string> answer;
    sort(n.begin(),n.end());

    do
        answer.push_back(n);
    while(next_permutation(n.begin(),n.end()));
    cout<<answer.size()<<"\n";
    for(string x :answer)
        cout<<x<<"\n";
}