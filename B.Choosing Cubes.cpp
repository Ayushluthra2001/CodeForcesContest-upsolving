#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n,f,k;
        cin>>n>>f>>k;
        int *arr= new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int fav=arr[f-1];
        int index=-1;
 
        sort(arr,arr+n);
        reverse(arr,arr+n);
        bool flag=0;
        bool flag2=0;
        for(int i=0;i<k;i++){
            if(arr[i]==fav){
                flag=1;
                break;
            }
        }
        for(int i=k;i<n;i++){
            if(arr[i]==fav){
                flag2=1;
                break;
            }
        }
        if(flag==1 && flag2==1) cout<<"MAYBE"<<endl;
        else if(flag==0){
            cout<<"NO"<<endl;
        }else cout<<"YES"<<endl;
 
    }
 
 
        return 0;
    }
