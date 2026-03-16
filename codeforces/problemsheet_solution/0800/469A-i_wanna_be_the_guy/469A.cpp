#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    cin>>a;
   
   
    int b;
    cin>>b;
     vector<int>v(b);
    for(int i=0;i<b;i++){
        int x;
        cin>>x;
        v[i]=x;
    }
    int c;
    cin>>c;
    
    
     vector<int>t(c);
     for(int i=0;i<c;i++){
        int x;
        cin>>x;
        t[i]=x;
    }
    
    
    /* for(int i=0;i<b;i++){
         cout<<v[i]<<" ";
     }
     for(int i=0;i<c;i++){
         cout<<t[i]<<" ";
     }*/
    
    int count=0;
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            if(v[i]==t[j]){
                count+=1;
                 //cout<<v[i]<<" "<<v[j]<<endl;
                //cout<<"count1"<<count<<endl;
            }
        }
    }
    
    /*for(int i=0;i<c;i++){
        for(int j=i+1;j<c;j++){
            if(t[i]==t[j]){
                count+=1;*/
                
                
                 //cout<<t[i]<<" "<<t[j]<<endl;
                 //cout<<"count2"<<count<<endl;
            

    
    
    if(((b+c)-count)==a){
        cout<<"I become the guy.";
        //cout<<(b+c)<<" ";
        //cout<<count;
    }
    else{
        cout<<"Oh, my keyboard!";
        //cout<<(b+c)<<" ";
        //cout<<count;
    } 
    
}