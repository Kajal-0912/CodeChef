#include<bits/stdc++.h>

using namespace std;



int main(){

    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int max = 0;

        for(int i=a; i<=b; i++){
            if(i%2==0){
                max++;
            }
        }
        if(b-a>2){
            int min = 0;
            if(a%2==0){
                cout<<a<<" "<<a+2<<endl;
            }
            else if(a%3==0){
                cout<<a<<" "<<a+3<<endl;
            }
            else{
                cout<<a+1<<" "<<a+3<<endl;
            }
        }else{
            if(__gcd(a,b)>1){
                cout<<a<<" "<<a+2<<endl;
            }else{
                cout<<-1<<endl;
            }
        }


    }
    return 0;
}