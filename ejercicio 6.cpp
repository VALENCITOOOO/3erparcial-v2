#include <iostream>
using namespace std;
int main()
{
  int numero;
  cout<<"ingresa el numero de la carta: ";

  cin>>numero;

    switch(numero) {
        case 1:
          cout<<"AZ";
            break;
        case 10:
          cout<<"SOTA";
            break;
        case 11:
          cout<<"CABALLO";
            break;
        case 12: 
          cout<<"REY";
            break;
        case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
          cout<<"no es ninguna figura";       


            break;
        default:
            cout<<"este no pertenece a la baraja española";
    }



 return 0;
}