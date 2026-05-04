#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<string>v;
    for(int i=0;i<a;i++){
        int p;
        cin>>p;
        int mod=p%3;
        if(mod==0){
            v.push_back("Second");
        }
        else if((mod==1) or (mod==2)){
            v.push_back("First");
        }
        
    }
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    
}