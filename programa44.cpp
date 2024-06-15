#include <iostream>

int main() {
    
    const int filas = 3;
    const int columnas = 3;

    
    int matriz[filas][columnas] = {
        {2, 9, 8},
        {1, 0, 8},
        {6, 5, 9}
    };

    
    std::cout << "La matriz es:" << std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}