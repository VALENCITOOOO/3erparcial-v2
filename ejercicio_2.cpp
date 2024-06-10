#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

int main() {

  
  vector<int> numeros(5); 
  int menor, mayor;
  bool hayRepetidos = false;

 
  
  cout << "Ingrese 5 números: " << endl;
  for (int i = 0; i < 5; i++) {
    cin >> numeros[i];
  }

  menor = mayor = numeros[0];
  for (int i = 1; i < 5; i++) {
    if (numeros[i] < menor) {
      menor = numeros[i];
    } else if (numeros[i] > mayor) {
      mayor = numeros[i];
    }
  }


  sort(numeros.begin(), numeros.end()); 
  for (int i = 1; i < 5; i++) {
    if (numeros[i] == numeros[i - 1]) {
      hayRepetidos = true;
      cout << "Número repetido " << numeros[i] << endl; 
    }
  }

  
  cout << "El número menor es " << menor << endl;
  cout << "El número mayor es " << mayor << endl;

  return 0;
}
