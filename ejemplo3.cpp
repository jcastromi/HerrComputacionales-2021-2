#include<iostream>
int main(){
  std::cout.setf(std::ios::scientific);
  std::cout.precision(6);
  float x=1.0;
  float y=x+1.0e-7;
  std::cout<<x<<"\n";
  std::cout<<y<<"\n";

  return 0;
}
