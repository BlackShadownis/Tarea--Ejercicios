#include <iostream>
using namespace std;

double elevarNumero(double numero, int potencia) {
    double resultado = 1;

    for (int i = 0; i < potencia; i++) {
        resultado *= numero;
    }

    return resultado;
}

int main() {
    double numero;
    int potencia;

    cout << "Ingrese el número: ";
    cin >> numero;

    cout << "Ingrese la potencia: ";
    cin >> potencia;

    double resultado = elevarNumero(numero, potencia);

    cout << numero << " elevado a la potencia " << potencia << " es igual a: " << resultado << endl;

    return 0;
}
