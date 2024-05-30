#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>digit,ch;
        bool check=true;

        int i=0;
        if(isdigit(s[0])){
                int i=0;

                while(i<s.length() && isdigit(s[i])){
                        i++;
                }
                while(i<s.length()){
                    if(isdigit(s[i])) check=false;
                    i++;
                }
        }else{
            int i=0;
            while(i<s.length() && !isdigit(s[i])) i++;
            while(i<s.length()){
                if(isdigit(s[i])) check=false;
                i++;
            }

        }
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])) digit.push_back(s[i]-'0');
            else ch.push_back(s[i]-'0');
        }

        for(int i=1;i<digit.size();i++){
            if(digit[i]<digit[i-1]) check=false;

        }
        for(int i=1;i<ch.size();i++){
            if(ch[i]<ch[i-1]) check=false;

        }
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }



        return 0;
    }



