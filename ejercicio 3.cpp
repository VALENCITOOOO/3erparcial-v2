#include <iostream>
using namespace std;
int main()
{
  int n1,n2,n3;
  cout<<"ingresa tus 3 numeros: \n";
  cin>>n1;
  cin>>n2;
  cin>>n3;  


  if(n1>n2){
    int temp =n1;
    n1=n2;
    n2=temp;
  }
  if(n2>n3){
    int temp=n2;
    n2=n3;
    n3=temp;
  }
  if(n1>n2){
    int temp=n1;
    n1=n2;
    n2=temp;
  }
  cout<<"Los numeros ordenados de menor a mayor son: "<< n1 << " " << n2 << " " << n3;
  return 0;
}