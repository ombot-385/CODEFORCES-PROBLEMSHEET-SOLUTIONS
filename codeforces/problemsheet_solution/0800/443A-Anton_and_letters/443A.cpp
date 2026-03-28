#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    //string s;
    //getline(cin,s);  //these first two line is also valid but getline(cin>>ws,s); is safer to use
    
    /*int x;
     * cin>>x
     * cin.ignore();  //important or cin>>ws;
     * string s;
     * getline(cin,s);//works
     * */
     
     string s;
     getline(cin>>ws,s);
     
     int length=s.length();
     int count=0;
     
     for(int i=1;i<length;i=i+3){
         for(int j=i+3;j<length;j=j+3){
             if(s[i]==s[j]){
                 count+=1;
                 break;
             }
         }
     }
     int total=length/3;
     int result=total-count;
     cout<<result;
    
    
}