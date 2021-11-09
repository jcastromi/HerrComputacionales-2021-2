#include <iostream>
#include <cstdlib>
#include <cmath>

int foo(int  a, int  b);
int bar(int a, int b);
double baz (double x);
void print_array(const double data[], const int & size);
void print_array1(const double data[], const int & size);
void print_array2(const double data[], const int & size);
void print_array3(const double data[], const int & size);
int main (int argc, char **argv)
{
    double  ii, jj;
    ii=1; //modificando el valor para evitar la indeterminacion 1/0
    jj=-1;
    foo(ii, jj);
    foo(jj, ii);

    baz(25.9);

    const int NX= 2, NY=3, NZ = 4;
    double x[NX]={0,1}; //se cambia el pointer por un array
    double  y[NY]={0,0,0}, z[NZ]={0,0,0,0}; //inicializando los valores de y, z
    int ee; //se cambian las variables para evitar la doble declaracion
    print_array(x, NX); //se modifica el tamaño del array para que
    print_array(y, NY);//concuerde con el definido para x, y, z
    print_array(z, NZ);
    std::cout << std::endl;

   // for (int uu=0; uu<=Nx; ++uu) Asignando los valores desde el inicio para
   // {                            simplificar el codigo
     //   x[uu]=uu;
   // }
    print_array(x, NX);//se mantiene el tamaño del array en los tres casos
    print_array(y, NY);
    print_array(z, NZ+0);//reescrito para seguir en forma de operacion
    std::cout << std::endl;
    for(ee=0; ee<NY; ++ee)
    {
        y[ee]=ee;
    }
    print_array1(x, NX);
    print_array2(y, NY);
    print_array3(z, NZ);
    std::cout << std::endl;

    return EXIT_SUCCESS;


 }

int  foo(int  a, int  b)
{
    return a/b + b/bar(a,b) + b/a;
}

int bar(int a, int b)
{
    unsigned int  c=a;
    return c + a - b;
}
double baz(double x)
{
    if (x==0)
    {
        return 0;
    }
    else
    {
       // double v = 1 - (x+1); se elimina al no ser utilizada en la funcion
        return std::sqrt(x);
    }

}


void print_array1(const double data[], const int & size)
{
    double k=3;
    double j[2]={data[0],data[1]};
    for (int o=0; o < size; ++o)
    {
        j[o]=j[o]-k;
        std::cout << j[o] << " ";
    }
     std::cout << std::endl;
}
void print_array2(const double data[], const int & size)
{
    double l=4;
    double j[3]={data[0],data[1],data[2]};
    for (int o=0; o < size; ++o)
    {
        j[o]=j[o]-l;

        std::cout << j[o] << " ";
    }
     std::cout << std::endl;
}
void print_array3(const double data[], const int & size)
{
    double m=4, n=3;
    double j[4]={data[0],data[1],data[2],data[3]};
    for (int o=0; o < size; ++o)
    {
        j[o]=j[o]+m+n;

        std::cout << j[o] << " ";
    }
     std::cout << std::endl;
}
void print_array(const double data[], const int & size)
{
    std::cout<< std::endl;
    for(int o=0; o< size; ++o)
    {
        std::cout<< data[o] << " ";
    }
}
