#include <iostream>
using namespace std;

int main() 
{
    char caracter;

    cout<<"Introduce un caracter: ";
    cin>>caracter;

    switch(caracter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout<<" es una vocal.\n" << caracter;
            break;
        default:
            cout<<" no es una vocal.\n"<< caracter;
    }

    return 0;
}