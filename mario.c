#include <stdio.h>
#include <stdlib.h>
#include "figuras.h"

void dibujar(void);
void cuadrito(int x, int y, char *color);

int main(void)
{
  system("clear");
  dibujar();

  gotoxy(0, 20);
  
  return 0;
}

void dibujar(void)
{
  for (int i = 0; i < 5; i++) {
    cuadrito(3 + i, 2, RED);
  }
  for (int i = 0; i < 10; i++) {
    cuadrito(2 + i, 3, RED);
  }
  for (int i = 0; i < 3; i++) {
    cuadrito(2 + i, 4, YEL);
  }
  for (int i = 0; i < 2; i++) {
    cuadrito(5 + i, 4, WHT);
  }
  cuadrito(7, 4, BLK);
  cuadrito(8, 4, WHT);
  
  cuadrito(1, 5, YEL);
  cuadrito(2, 5, WHT);
  cuadrito(3, 5, YEL);
  
  for (int i = 0; i < 3; i++) {
    cuadrito(4 + i, 5, WHT);
  }
  cuadrito(7, 5, WHT);
  for (int i = 0; i < 3; i++) {
    cuadrito(8 + i, 5, WHT);
  }

  cuadrito(1, 6, YEL);
  cuadrito(2, 6, WHT);
  cuadrito(3, 6, YEL);
  cuadrito(4, 6, YEL);
  for (int i = 0; i < 3; i++) {
    cuadrito(5 + i, 6, WHT);
  }
  cuadrito(8, 6, YEL);
  for (int i = 0; i < 3; i++) {
    cuadrito(9 + i, 6, WHT);
  }

  cuadrito(1, 7, YEL);
  cuadrito(2, 7, YEL);

  for (int i = 0; i < 4; i++) {
    cuadrito(3 + i, 7, WHT);
  }
  for (int i = 0;i < 4; i++) {
    cuadrito(7 + i, 7, YEL);
  }
  for (int i = 0; i < 7; i++) {
    cuadrito(3 + i, 8, WHT);
  }

  cuadrito (2, 9, RED);
  cuadrito(3, 9, RED);
  cuadrito(4, 9, BLU);
  cuadrito(5, 9, RED);
  cuadrito(6, 9, RED);
  cuadrito(7, 9, RED);
}

void cuadrito(int x, int y, char *color)
{
  gotoxy(x,y);
  printf("%s%s" RESET, color, "\u2588"); 
}
