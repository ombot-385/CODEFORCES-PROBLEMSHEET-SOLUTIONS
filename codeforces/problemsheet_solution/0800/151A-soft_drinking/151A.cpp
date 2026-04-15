#include<iostream>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int kl=k*l;
    int drink=kl/nl;
    int lime=c*d;
    int salt=p/np;
    
    int smallest=1000;
    if(drink>=lime){
        smallest=lime;
    }
    else{
        smallest=drink;
    }
    
    if(smallest>salt){
        smallest=salt;
    }
   cout<<smallest/n;
}