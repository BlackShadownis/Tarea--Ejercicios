#include <iostream>
#include <vector>


int contar17OvejasPresentes(const std::vector<bool>& ovejas) {
    int contador = 0;

    for (bool presente : ovejas) {
        if (presente) {
            contador++;
            if (contador == 17) {
                break; 
            }
        }
    }

    return contador;
}

int main() {
    std::vector<bool> ovejasPresentes = {true, true, true, false, true,true, true, true,true, false,true,false,true, false, false, true, true,true,true,true,false, false, true, true};

    int cantidadPresentes = contar17OvejasPresentes(ovejasPresentes);

    std::cout << "El número de ovejas presentes es: " << cantidadPresentes << std::endl;

    return 0;
}
