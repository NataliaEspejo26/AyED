#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
float n=450000,i, signo=1;
float pi=0;

 for ( i = 1; i <= n; i+=2)
 {
    pi=pi+signo*(4/i);
    signo=-signo;
 }
 

cout<< "Valor de pi es igual a: "<< fixed << setprecision(6)<<  pi << endl;

 return 0;
}