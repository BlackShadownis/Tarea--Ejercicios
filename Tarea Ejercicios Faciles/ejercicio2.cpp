#include <iostream>
using namespace std;

int main() {
   
    std::cout << "Los múltiplos de 3 entre 1 y 20 son:" << std::endl;
    
    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 0) {
            std::cout << i << " ";
        }
    }
    
    std::cout << std::endl;
    
    return 0;
}



