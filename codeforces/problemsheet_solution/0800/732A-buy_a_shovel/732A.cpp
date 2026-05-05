//'3'-3 = c-'0' character to num 
//3-'3'=b+'0'     num to charcater 




#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int x=0;
    for(int i=1;i<=1000;i++){
        int mul=a*i;
        string s=to_string(mul);
        int length=s.length();
        //cout<<length<<" "<<s[length-1]<<endl;
        // to string char p=to_string(b);
        char p=b+'0';//to char
        char q=x+'0';
        //cout<<p<<endl;
        if((s[length-1]==p ) or(s[length-1]==q)){
            //cout<<q<<endl;
            x=i;
            break;
        }
    }
    cout<<x;
    
}