#include<bits/stdc++.h>
using namespace std;

class watermelon{
   int w;  // int x;
   public:
       watermelon(int x){  //constructor
           w=x; // this->x;
       }       
       void print(){
           if(w>2 && w%2==0){
               cout<<"YES";
           }
           else{
               cout<<"NO";
           }
       }
};
       
int main(){
    int a;
    cin>>a;
    watermelon w1(a);  //pass value to class
    w1.print();
    return 0;
}
