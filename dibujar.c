#include <stdio.h>
#include <stdlib.h>

void gotoxy(int x, int y)
{
  printf("%c[%d;%df", 0x1B, y, x);
}

void rectaH(int x, int y, int l)
{
  gotoxy(x, y);
  for (int i = 0; i < l; i++) {
    printf("%c", 219);
  }
}

void rectaV(int x, int y, int l)
{
  gotoxy(x, y);
  for (int i = y; i < l + y; i++) {
    gotoxy(x, i);
    printf("%c", 219);
  }
}

void rectangulo(int x, int y, int alto, int ancho)
{
  rectaH(x, y, ancho);
  rectaV(x, y, alto);
  rectaH(x, y + alto - 1, ancho);
  rectaV(x + ancho - 1, y, alto);
}

int main(void)
{
  rectangulo(5, 5, 5, 10);
  rectangulo(20, 5, 5, 10);
  rectangulo(35, 5, 5, 10);

  rectangulo(5, 11, 5, 10);
  rectangulo(20, 11, 5, 10);
  rectangulo(35, 11, 5, 10);

  for (int i = 0; i < 10; i++) {
    printf("\n");
  }

  return 0;
}
