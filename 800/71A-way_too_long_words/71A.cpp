#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int n;
    vector<string>v;
    
    cin>>n;
    for(int i=0;i<n;i++){
       string s;
       cin>>s;
       v.push_back(s);
       }
       
    for(int i=0;i<n;i++){
        if (v[i].length()<=10){
            cout<<v[i]<<endl;
        }else{
            int t;
            string h;
            h=v[i];
            t=v[i].length()-2;
            
            
            cout<<h[0]<<t<<h[t+1]<<endl;
            //cout<<v[i][0]<<t<<v[i]
            //cout<<h[0]<<t<<h[t+1];
        }
        
    }
    
    
}
