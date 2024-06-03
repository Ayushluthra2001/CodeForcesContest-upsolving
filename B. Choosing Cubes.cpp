#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
 
    while(t--){
        unordered_map<char,int>mapping;
        int n;
        cin>>n;
        int round;
        cin>>round;
        string s;
        cin>>s;
        for(char ch='A';ch<='G';ch++){
            mapping[ch]=0;
        }
        for(auto i : s){
            mapping[i]++;
        }
        int ans=0;
        for(auto i : mapping){
                //cout<<i.first<<" "<<i.second<<endl;
            if(i.second<round){
                ans+=round-i.second;
            }
        }
        cout<<ans<<endl;
 
    }
 
 
        return 0;
    }
