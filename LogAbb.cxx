// Logistische Abbildung

#include<iostream>

using namespace std;

int main(){
 
 
 for(double r=0.1;r<4.1;r+=0.01){
  double x=0.5;  
  for (int i=1; i<101;i++){
    x=x*r*(1-x);
    if (i>20) 
      cout <<r<<" " <<x<<endl;
  }
 }
}