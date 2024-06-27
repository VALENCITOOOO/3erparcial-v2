#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    double base, altura, lado, baseMayor, baseMenor, clrscr;
    char opcion;

    do {
       

        cout << "Calculadora de Areas" << endl;
        cout << "1. Area de un Triangulo" << endl;
        cout << "2. Area de un Cuadrado" << endl;
        cout << "3. Area de un Trapecio" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        opcion = getche(); 
        
        cout << endl;

        switch(opcion) {
            case '1':
                cout << "Ingrese la base del triangulo: ";
                cin >> base;
                cout << "Ingrese la altura del triangulo: ";
                cin >> altura;
                cout << "El area del triangulo es: " << (base * altura) / 2 << endl;
                break;
            case '2':
                cout << "Ingrese el lado del cuadrado: ";
                cin >> lado;
                cout << "El area del cuadrado es: " << lado * lado << endl;
                break;
            case '3':
                cout << "Ingrese la base mayor del trapecio: ";
                cin >> baseMayor;
                cout << "Ingrese la base menor del trapecio: ";
                cin >> baseMenor;
                cout << "Ingrese la altura del trapecio: ";
                cin >> altura;
                cout << "El area del trapecio es: " << ((baseMayor + baseMenor) * altura) / 2 << endl;
                break;
            case '4':
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida, por favor intente de nuevo." << endl;
                break;
        }

        cout << "Presione cualquier tecla para continuar..." << endl;
        getch();  

    } while(opcion != '4');

    return 0;
}
