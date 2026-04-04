#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    
    int n=0;
    if(a%2==0){
        n=a/2;
    }
    else{
        n=(a/2)+1;
    }
    
    int res=0;
    while(n<=a){
        if(n%b==0){
            res=n;
            break;
        }
        n++;
    }
    
    if(res==0){
        cout<<-1<<endl;
    }
    else{
        cout<<res<<endl;
    }
    
}