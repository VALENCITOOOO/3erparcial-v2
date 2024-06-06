#include <iostream>
#include <string.h>
#include <vector>
int multiplicacion(int articulos, int precio){
   return articulos*precio;
}

int main() {

    char nombre[50];
    char contrasena[50];
    int intentos = 3;
    int articulos, precio, i, total;
    std::vector<int> ventas;
   

    do {
        std::cout<<"Introduce tu nombre: ";
        std::cin>> nombre;
        std::cout<<"Introduce tu contraseña: ";
        std::cin>>contrasena;
        if (strcmp(nombre, "OSVALDO") == 0 && strcmp(contrasena, "2B8") == 0) {     
            std::cout<<"bienvenido al sistema" << std::endl;  
            break;
        } else {
            intentos--;
        
            std::cout<<"Nombre de usuario o contraseña incorrectos. Te quedan" << intentos << std::endl; 
                     
                 
        }
    } while (intentos > 0);
    if (intentos == 0) {
        std::cout<<"Lo sentimos ha superado el número máximo de intentos permitidos" <<std::endl;
        return 0;
  }
        
        std::cout<<"Introduce 0 para finalizar la venta o 1 para mostrar el total de ventas .\n";
           
    
            while (true) {
              std::cout<<"ingrese la cantidad vendida : ";
              std::cin>>articulos;
                if (articulos ==0 ) {
                   break;
                }
                if (articulos == 1) {
                   int sumaTotal = 0;
                   std::cout << "Ventas realizadas:\n";
                   for (size_t i = 0; i < ventas.size(); ++i) {
                        std::cout << "Venta " << i + 1 << ": " << ventas[i] << std::endl;
                        sumaTotal += ventas[i];
                   }
                   std::cout << "Total de todas las ventas: " << sumaTotal << std::endl;
                   continue;
              }
              if (articulos < 0) {
                  std::cout << "La cantidad debe ser un número positivo" << std::endl;
                  continue;
             }
             std::cout << "Ingrese el precio: ";
             std::cin >> precio;
             if (precio < 0) {
                 std::cout << "El precio debe ser un número positivo" << std::endl;
                 continue;
            }
            total = multiplicacion(articulos, precio);
            ventas.push_back(total);
            std::cout << "El total es de: " << total << std::endl;
    }

    return 0;
}
