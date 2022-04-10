#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int b=1;
        if(n%4==3 || n%4==2){
            cout<<3;
        }else if(n%4==0){
            cout<<n+3;
        }else if(n%4==1){
            cout<<n;
        }
        cout<<endl;
    }
    return 0;
}