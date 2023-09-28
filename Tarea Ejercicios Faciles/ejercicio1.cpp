#include <iostream>
using namespace std;

int main() {
    double centimeters, inches;

    
    cout << "Ingrese la longitud en centímetros: ";
    cin >> centimeters;

   
    inches = centimeters / 2.54;

    
    cout << centimeters << " centímetros equivale a " << inches << " pulgadas." << std::endl;

    return 0;
}
