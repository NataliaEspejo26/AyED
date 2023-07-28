#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 0.0;
    int signo = 1;
    
    for ( int i = 1; ; i+=2)
 {
    pi += signo * (4.0 / i);
    signo=-signo;
    
    if ( pi > 3.1415915 && pi < 3.141593 )
    {
        break;
    } 
 }   
    cout << "El valor aproximado de pi es: " << fixed << setprecision(6)<< pi << endl;
    return 0;
}
