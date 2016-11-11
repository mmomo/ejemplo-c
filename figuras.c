/**
 * figuras.c
 */

#include <stdio.h>
#include "figuras.h"


void gotoxy(int x, int y)
{
  printf("%c[%d;%df", 0x1B, y, x);
}

void rectaH(int x, int y, int l, char *color)
{
  gotoxy(x, y);
  for (int i = 0; i < l; i++) {
    printf("%s%c",color, 219);
  }
}

void rectaV(int x, int y, int l, char *color)
{
  gotoxy(x, y);
  for (int i = y; i < l + y; i++) {
    gotoxy(x, i);
    printf("%s%c",color, 219);
  }
}

void rectangulo(int x, int y, int alto, int ancho, char *color)
{
  rectaH(x, y, ancho, color);
  rectaH(x, y + alto - 1, ancho, color);
  rectaV(x, y, alto, color);
  rectaV(x + ancho - 1, y, alto, color);
}

void triangulo(int x, int y, int alto, char *color)
{
  int espacios = alto - 1;
  int gatos = 1;
  gotoxy(x,y);
  for (int i = 0; i < alto; i++) {
    gotoxy(x, y++);
    for (int j = 0; j < espacios; j++) {
      printf(" ");
    }
    for (int j = 0; j < gatos; j++) {
      printf("%s#", color);
    }
    printf("\n");
    espacios -= 1;
    gatos += 1;
  }
}

void diagonal1(int x, int y, int l, char *color)
{
  
  for (int i = 0; i < l; i++) {
    gotoxy(x, y);
    printf("%s%c", color, 219);
    x++;
    y++;
  }
}

void diagonal2(int x, int y, int l, char *color)
{
  for (int i = 0; i < l; i++) {
    gotoxy(x, y);
    printf("%s%c", color, 219);
    x--;
    y++;
  }
}
