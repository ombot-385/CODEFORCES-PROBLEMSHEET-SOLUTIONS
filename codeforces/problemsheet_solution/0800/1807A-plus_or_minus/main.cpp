#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<char>v;
    for(int i=0;i<n;i++){
        for(int j=0;j<1;j++){
            int p;
            int q;
            int r;
            cin>>p;
            cin>>q;
            cin>>r;
            if(p+q==r){
                v.push_back('+');
            }
            else if((p-q)==r){
                v.push_back('-');
            }
        }
    }
    
    //int length=v.length();
    for(int i=0;i<n;i++){
        //string t=v[i];
        cout<<v[i]<<endl;
    }
    
}