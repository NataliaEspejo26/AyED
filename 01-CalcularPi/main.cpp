#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double pi = 0.0;

	// coloco cualquier valor que sea lo suficientemente 
	// distante de pi para que la condicion del while se cumpla
	double prev_pi = -1.0;

	int signo = 1;
	int i = 1;

	// mientras la diferencia entre pi y el valor previo de pi 
	// no sea lo suficientemente chica para tener la presicion 
	// mencionada en el ejercicio, continuará ciclando
	while (abs(pi - prev_pi) > 0.0000015) { 
		prev_pi = pi;
		pi += signo * (4.0 / i);
		signo = -signo;
		i += 2;
	}

	// al salir del ciclo whille, obtuvimos una diferencia 
	// entre pi y su valor previo de pi lo suficientemente
	// chica para obtener el resultado esperado
	cout << "El valor aproximado de pi es: " << fixed << setprecision(6) << pi << endl;
	return 0;
}
