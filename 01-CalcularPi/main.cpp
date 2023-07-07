#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 0.0;
    int den = 1;
    int signo = 1;

    int i = 0;
    int maxI = 1000000;

    while ( i < maxI ) {
        pi += signo * (4.0 / den);
        den += 2;
        signo = -signo;
        i++;
    }

    cout << "El valor aproximado de pi es: " << fixed << setprecision(6)<< pi << endl;

    return 0;
}
