#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    cin>>a;
    
    int count=0;
    
    vector<int>v(a);
    
    for(int i=0;i<a;i++){
       cin>>v[i]; 
    }
    
    for(int i=0;i<a;i++){
        if(v[i]==1 or v[i]==2){
            count=0;
             cout<<count<<endl;
        }
        
        else if(v[i]%2==0){
            //int total=v[i]/2;
            count=((v[i]/2)-1);
             cout<<count;
        }
        
        else{
            count=(v[i]/2);
             cout<<count;
        }
            
        }
       
    }
