#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;
int main(){
    int a;
    cin>>a;
    
    vector<string>v(a);
    for(int i=0;i<a;i++){
        cin>>v[i];
    }
    
    for(int i=0;i<a;i++){
        //v[i]=toupper(v[i]); to upper only works for string
        string p=v[i];
        int length=p.length();
        for(int j=0;j<length;j++){
            p[j]=toupper(p[j]);
            v[i][j]=p[j];
           // v[i][j]=p;  wrong syntax upper one is correct
        }
        //cout<<v[i]<<"hoil"<<endl;
        if(v[i]=="YES"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}