#include <stdio.h>
#include <stdlib.h>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

void gotoxy(int x, int y);
void rectaH(int x, int y, int l, char *color);
void rectaV(int x, int y, int l, char *color);
void rectangulo(int x, int y, int alto, int ancho, char *color);
void triangulo(int x, int y, int alto, char *color);

int main(void)
{

  rectangulo(5, 5, 5, 10, RED);
  rectangulo(20, 5, 5, 10, GRN);
  rectangulo(35, 5, 5, 10, YEL);

  rectangulo(5, 11, 5, 10, BLU);
  rectangulo(20, 11, 5, 10, MAG);
  //rectangulo(35, 11, 5, 10, CYN);

  triangulo(35, 11, 5, BLU);

  for (int i = 0; i < 20; i++) {
    printf("\n");
  }

  return 0;
}


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
