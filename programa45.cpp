#include <iostream>

int main() {
    
    const int numNombres = 2;
    std::string nombres[numNombres] = {"fernando", "oscar"};

    
    const int numNumeros = 3;
    int numeros[numNumeros] = {74, 56, 10};

    
    std::cout << "Arreglo 1:" << std::endl;
    for (int i = 0; i < numNombres; ++i) {
        std::cout << "El dato de la posición " << i + 1 << " = " << nombres[i] << std::endl;
    }

    
    std::cout << "\nArreglo 2:" << std::endl;
    for (int i = 0; i < numNumeros; ++i) {
        std::cout << "Posición " << i << " = " << numeros[i] << std::endl;
    }

    return 0;
}
