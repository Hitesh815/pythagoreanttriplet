#include <iostream>
using namespace std;
int main(){
  int a,b,c;
  for(a=1;a<=500;a++){
    for(b=1;b<=500;b++){
      for(c=1;c<=500;c++){
        if(a*a+b*b==c*c){
          cout<<"("<<a<<","<<b<<","<<c<<")";
          
        }
      }
    }
  }
  return 0;
}