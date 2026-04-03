#include<iostream>
#include<string>
using namespace std;
int main(){
   int a,b;
   cin>>a>>b; 
   for(int i=1;i<=a;i=i+1){
       if(i%2!=0){
           for(int j=1;j<=b;j++){
           cout<<"#";
       }
       cout<<endl;
       }
       
       else if(i%4==0){
           cout<<"#";
           for(int k=0;k<(b-1);k++){
               cout<<".";
           }
           cout<<endl;
           
       }
       
       else{
           for(int l=0;l<(b-1);l++){
               cout<<".";
               //cout<<"#";
           }
           cout<<"#";
           cout<<endl;
           
       }
       
       
    
   }
}