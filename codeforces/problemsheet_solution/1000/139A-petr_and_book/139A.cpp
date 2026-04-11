#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    
    int b,c,d,e,f,g,h;
    cin>>b>>c>>d>>e>>f>>g>>h;
    
    int count=0;
    while(a>0){
        a=a-b;
        count++;
        if(a<=0){
            break;
        }
        
        a=a-c;
        count++;
        if(a<=0){
            break;
        }
        
        a=a-d;
        count++;
        if(a<=0){
            break;
        }
        
        a=a-e;
        count++;
        if(a<=0){
            break;
        }
        
        a=a-f;
        count++;
        if(a<=0){
            break;
        }
        
        a=a-g;
        count++;
        if(a<=0){
            break;
        }
        
        a=a-h;
        count++;
        if(a<=0){
            break;
        }
        
        
    }
    
    int res=count%7;
    if (res==0){
        cout<<7<<endl;
    }
    else{
          cout<<res<<endl;
    }
  
}