#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int>v1;
    // vector<int>v2;
    for(int i=0;i<a;i++){
        //v2.clear();
        vector<int>v2;
        int count=0;
       
        for(int j=0;j<4;j++){
            int p;
            cin>>p;
            v2.push_back(p);
        }
        
        //int largest=v2[0];
        //cout<<largest;
        for(int k=1;k<4;k++){
            if(v2[k]>v2[0]){
               count++; 
            }
        }
        
        v1.push_back(count);
        
    }
    
   for(int i=0;i<a;i++){
        cout<<v1[i]<<endl;
    }
    
    
}
