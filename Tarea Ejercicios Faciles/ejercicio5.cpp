#include <iostream>
using namespace std;

long long calcularFactorial(int num) {
    long long factorial = 1; 

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;


        long long resultado = calcularFactorial(num);
        cout << "El factorial de " << num << " es: " << resultado << endl;


    return 0;
}
