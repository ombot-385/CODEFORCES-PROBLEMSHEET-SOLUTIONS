#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int p;
    if(a>=b){
        p=((6-a)+1);
    }
    else if(a<b){
        p=((6-b)+1);
    }

    int q=6;
    
    for(int i=2;i<=p;i++){
        if((p%i==0) and (q%i==0)){  //here it worked because maximum number is 6 so even any number would be divide by 2 once 6 will brcome 3 and there would be
            p=p/i;                  //no chnace to br divided again by 2 or any number thats why this for loop will work but in genral it wont work if numerator and 
            q=q/i;                  //denominator would br divided more than once by same number
        }
    }
    cout<<p<<"/"<<q;
    
}
