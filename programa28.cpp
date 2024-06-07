#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char nombre[50];
    char contrasena[50];
    int intentos = 3;

    do {
        cout<<"Introduce tu nombre: ";
        cin>>nombre;

        cout<<"Introduce tu contraseña: ";
        cin>>contrasena;

        if (strcmp(nombre, "OSVALDO") == 0 && strcmp(contrasena, "2B8") == 0) {
            cout<<"Bienvenido al sistema.\n";
            break;
        } else {
            intentos--;
            if (intentos > 0) {
            cout<<"Nombre de usuario o contraseña incorrectos. Te quedan" << intentos  << endl;
            } else {
                cout<<"Se ha superado el número de intentos permitido.\n";
                break;
            }
        }
    } while (intentos > 0);

    return 0;
}