#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    string s;
    for(int i=0;i<a.length();i++){
        char c2=a[i];
        char c=tolower(c2);
        //cout<<c<<endl;
        if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u' or c=='y'){
            continue;
        }
        
        else{
            s+='.';
            s+=c;
        }
    }
    
    cout<<s<<endl;
}