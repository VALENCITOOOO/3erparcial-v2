#include <iostream>
#include <string.h>
int multiplicacion(int articulos, int precio){
   return articulos*precio;
}

int main() {

    char nombre[50];
    char contrasena[50];
    int intentos = 3;
    int articulos, precio, i, total;
   

    do {
        std::cout<<"Introduce tu nombre: ";
        std::cin>> nombre;
        std::cout<<"Introduce tu contraseña: ";
        std::cin>>contrasena;
        if (strcmp(nombre, "OSVALDO") == 0 && strcmp(contrasena, "2B8") == 0) {          
            
                
            break;
        } else {
            intentos--;
            if (intentos > 0) {
                std::cout<<"Nombre de usuario o contraseña incorrectos. Te quedan" << intentos << std::endl;
            } else {
                std::cout<<"Se ha superado el número de intentos permitido.";
                break;
            }          
               }
    } while (intentos > 0);
        std::cout<<"Bienvenido a el sistema.\n";
            std::cout<<"cuando hayas terminado introduce 0 para finalizar.\n";
            std::cout<<"ingrese la cantidad vendida : ";
            std::cin>>articulos;
            while (articulos !=0) {
              std::cout<<"ingrese el precio : ";
              std::cin>>precio;
                if (articulos < 0 || precio < 0) {
                    std::cout<<"la cantidad y precio deben ser numeros positivos";
                } else {                    
                
                }
                std::cout<<"el total  es de " << multiplicacion(articulos, precio) << std::endl;            
           
     return 0;
}
}