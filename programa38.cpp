#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Inicializar la semilla para la generación de números aleatorios
    std::srand(std::time(0));
    
    // Crear un array con los números específicos
    int numeros[10] = {84, 87, 78, 16, 94, 36, 87, 93, 50, 22};
    
    // Mostrar los números y sus posiciones
    for (int i = 0; i < 10; ++i) {
        std::cout << "El número en la posición " << i + 1 << " es " << numeros[i] << std::endl;
    }
    
    return 0;
}
