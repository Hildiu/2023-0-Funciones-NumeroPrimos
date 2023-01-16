//
// Created by MARIA HILDA BERMEJO RIOS on 1/16/23.
//

#include "UFunciones.h"

bool esPrimo(tentero numero)
{
  if (numero==1)
    return false;
  for(tentero divisor=2; divisor<numero; divisor++)
    if(numero % divisor ==0)
      return false;
  return true;

}

tentero  siguientePrimo(tentero num)
{
  tentero i = num + 1;
  while(  !(esPrimo(i)))
    i++;
  return i;
}

tentero anteriorPrimo(tentero n)
{
  tentero i = n-1;
  while(  !(esPrimo(i)))
    i--;
  return i;
}