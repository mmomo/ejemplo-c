/**
 * dibujar.c
 * gcc -o dibujar dibujar.c figuras.c -std=c99
 */

#include <stdio.h>
#include "figuras.h"


int main(void)
{
  rectangulo(1,1,17,80,YEL);
  rectangulo(5, 5, 5, 10, RED);
  rectangulo(20, 5, 5, 10, GRN);
  rectangulo(35, 5, 5, 10, YEL);

  rectangulo(5, 11, 5, 10, BLU);
  rectangulo(20, 11, 5, 10, MAG);
  //rectangulo(35, 11, 5, 10, CYN);

  triangulo(35, 11, 5, BLU);

  diagonal2(50, 11, 5, CYN);
  diagonal1(42, 11, 5, CYN);
  rectaH(42, 11, 9, CYN);

  gotoxy(0, 18);

  return 0;
}
