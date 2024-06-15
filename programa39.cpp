#include <iostream>

int main() {
    int n;

   
    std::cout << "Ingrese el número de posiciones: ";
    std::cin >> n;

   
    int* numeros = new int[n];

  s
    int positivos = 0;
    int negativos = 0;

    
    for (int i = 0; i < n; ++i) {
        std::cout << "Ingrese el número en la posición " << i + 1 << ": ";
        std::cin >> numeros[i];
        
       
        if (numeros[i] >= 0) {
            ++positivos;
        } else {
            ++negativos;
        }
    }

    
    for (int i = 0; i < n; ++i) {
        std::cout << "El número en la posición " << i + 1 << " es " << numeros[i];
        if (numeros[i] >= 0) {
            std::cout << " (positivo)" << std::endl;
        } else {
            std::cout << " (negativo)" << std::endl;
        }
    }

    
    std::cout << "Cantidad de números positivos: " << positivo << std::endl;
    std::cout << "Cantidad de números negativos: " << negativo << std::endl;

    
    delete[] numeros;

    return 0;
}