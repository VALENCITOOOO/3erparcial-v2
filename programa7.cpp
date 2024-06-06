#include <iostream>
using namespace std;
int main() 
{
    int opcion;
    double base, altura, lado1, lado2, area;

    cout<<"1. Triángulo\n";
    cout<<"2. Trapecio\n";
    cout<<"3. Rectángulo\n";
    cout<<"Seleccione una opción (1-3): ";
    cin>>opcion;

    switch(opcion) {
        case 1:
            cout<<"Ingrese la base del triángulo: ";
            cin>>base;
            cout<<"Ingrese la altura del triángulo: ";
            cin>>altura;
            area = 0.5 * base * altura;
            cout<<"El área del triángulo es: " << area << endl;
            break;
        case 2:
            cout<<"Ingrese la base mayor del trapecio: ";
            cin>>base;
            cout<<"Ingrese la base menor del trapecio: ";
            cin>>lado1;
            cout<<"Ingrese la altura del trapecio: ";
            cin>>altura;
            area = 0.5 * (base + lado1) * altura;
            cout<<"El área del trapecio es: " << area << endl;
            break;
        case 3:
            cout<<"Ingrese la base del rectángulo: ";
            cin>>base;
            cout<<"Ingrese la altura del rectángulo: ";
            cin>>altura;
            area = base * altura;
            cout<<"El área del rectángulo es: " << area << endl;
            break;
        default:
            cout<<"Opción no válida";
    }

    return 0;
}