#include <iostream>
#include <string.h>
using namespace std;
int main() {
  char nombre[20];
  char grupoLista[20];
  int intentos = 0;
  do {
    cout<<"INGRESA tu nombre : ";
    cin>>nombre;
    cout<<"INGRESA TU GRADO Y NUM DE LISTA : ";
    cin>>grupoLista;
    if (strcmp(nombre, "Osvaldo") == 0 && strcmp(grupoLista, "2B8") == 0) {
      cout<<"Bienvenido al sistema";
      break;
    } else {
      intentos++;
      cout<<"Datos incorrectos intentos restantes"<< 3 - intentos<<endl;
    }
  } while (intentos < 3);
  if (intentos == 3) {
    cout<<"Lo sentimos ha superado el número máximo de intentos permitidos";
  }

  float Unidad, cantidad, importeTotal = 0;

  do {
    cout<<"\nsi quiere terminar ingrese 0";
    cout<<"\nIntroduzca el precio unitario del artículo : ";   
    cin>>Unidad;
    

    if (Unidad <= 0) {
      cout<<"\nel precio unitario debe ser un número positivo";
      continue;
    }

    cout<<"Introduzca la cantidad vendida : ";
    cin>>cantidad;

    if (cantidad <= 0) { 
      cout<<"Error la cantidad vendida debe ser un número positivo. ";
      continue;
    }

    importeTotal +=Unidad * cantidad;

    cout<<"\nImporte parcial : "<<importeTotal<<endl;
  } while (Unidad != 0);

  cout<<"\nImporte total de la factura : "<<importeTotal<<endl;



  return 0;



}