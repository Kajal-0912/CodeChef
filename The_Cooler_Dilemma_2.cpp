#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;
        int ans;
        ans = y/x;
       
        if(y%x==0){
             cout<<ans-1<<"\n";
        }else{
            cout<<ans<<"\n";
        }
    }
    return 0;
}