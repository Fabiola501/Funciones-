//Sanchez Perez Fabiola 2av4
#include <iostream>
using namespace std;
int main()
{
   int i,fact=1,numero;
  cout<<"Introduce un numero: ";
 cin>>numero;
  for(i=1;i<=numero;i++){
      fact=fact*i;
  }
  cout<<"El Factorial de " <<numero<<" es: "<<fact<<endl;
  return 0;
}
