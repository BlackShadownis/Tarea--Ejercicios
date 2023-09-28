#include <iostream>
using namespace std;

bool esPrimo(int num);

int main() {
    int num;
    cout << "Ingrese un número: "; cin >> num;
    
    if (esPrimo(num)) {
        cout << "El número es primo";
    } else {
        cout << "El número no es primo";
    }
    
    return 0;
}


bool esPrimo(int num) {
    if (num <= 1) {
        return false; 
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }
    
    return true; 
}