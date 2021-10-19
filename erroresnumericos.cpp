#include<iostream>
#include<cmath>
//calcular el sin(x=pi/3)
unsigned long long int nfactorial(int h);
double calcsin(double z, int y);

unsigned long long int nfactorial(int h)
{
  int ualor=1;
  for(int l=1;l<=h;l++)
    {
      ualor=ualor*l;
    }
      return ualor;
    }

double calcsin(double  z, int  y){
  double menos, expone, result=0;
  unsigned long long  int facto, expo;
  for(int g=1; g<=y;g++)
    {
      if(g%2==0)
	{
	  menos=-1;
      }
      else
	{
	  menos=1;
	  }
  expo=(2*g)-1;
  expone=std::pow(z,expo);
  facto=nfactorial(expo);
  result=(menos*expone)/facto + result;
    }
  return result;
}
int main()
{
  const double x=M_PI/3;
  const double exact=std::sin(x);
  std::cout.setf(std::ios::scientific);
  std::cout.precision(6);
  for(int Nmax =1; Nmax<=1000; Nmax++)
    {double diff= std::fabs(calcsin(x,Nmax)-exact)/exact;
      
      std::cout<<Nmax<<"\t"<<diff<<"\n";
      
    }
  return 0;
}
  
