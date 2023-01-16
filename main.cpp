/*---------------------------------------------------
 * dato de Entrada : num (long int)  num >10
 * dato de Salida : sgtePrimo, antPrimo (long int)
 --------------------------------------------------*/
#include "UFunciones.h"

int main()
{
  tentero numero;

  do{
    cout << "Numero : ";
    cin >> numero;
  }while(numero <=10);

  cout << "\n";
  cout << "El siguiente numero primo es : " << siguientePrimo(numero) << "\n";
  cout << "El anterior numero primo es  : " << anteriorPrimo(numero) << "\n";

  return 0;
}
