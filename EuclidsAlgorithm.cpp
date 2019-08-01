// Author: Cody Wright

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std; 

double gcd(int a, int b, int i=0)
{
   int A, B, r;
   int gcdResult;
   
   if (a==0 && b==0) cout<<"Invalid Parameters!"<<endl;
   
   if(a>b) {
      A = a;
      B = b;
   }
   else {
      A = b;
      B = a;
   }
   
   cout<<"A: "<<A<<endl;
   cout<<"B: "<< B << endl;
   
   if (B==0 && i==0) gcdResult = A;
   else {
      r = A;
      while(r>B || r==B) {
      r = r-B;
      cout<<"r: "<< r << endl;
      }
      
      if (r==0)gcdResult = r+B;
      else {
         i++;
         gcdResult = gcd(B,r,i);
      }
   }
   
   return gcdResult;
}


int main()
{
  cout << "This program calculates gcd"<<endl;
  
  
  while(true) {
  
  int a,b,gcdResult;
  
  cout<<"Enter a: ";
  cin>>a;
  
  cout<<"Enter b: ";
  cin>>b;
  
  gcdResult = gcd(a,b);
  
  cout<<"gcd = "<<gcdResult<<endl;
  }
  
  return 0;
}
