#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void gotoxy(int x, int y);
void dibujarCaja(int x,int y, int alto, int ancho);

void espera(unsigned int secs)
{
  unsigned int retTime = time(0) + secs;
  while (time(0) < retTime);
}

int main(void)
{
  system("clear");
  /*
  dibujarCaja(10, 2, 5, 10);
  dibujarCaja(22, 2, 5, 8);
  dibujarCaja(8, 7, 5, 13);
  */

  int x = 2;
  for (int i = 0; i < 10; i++) {
    system("clear");
    dibujarCaja(x, 2, 5,10);
    x += 2;
    fflush(stdout);
    // espera(1);
    usleep(100000);
  }
  
  gotoxy(0, 20);
  printf("\u234b\n");

  return 0;
}

void gotoxy(int x, int y)
{
  printf("%c[%d;%df", 0x1B, y, x);
}

// esta funcion dibuja una caja bonita
void dibujarCaja(int x, int y, int alto, int ancho)
{
  int tmp = y;
  gotoxy(x, y);
  
  printf("\u250f");
  for (int i = 0; i < ancho - 2; i++) {
    printf("\u2501");
  }
  printf("\u2513");
  
  for (int i = 0; i < alto - 2; i++) {
    gotoxy(x, y+1);
    printf("\u2503");
    gotoxy(x + ancho - 1, y + 1);
    printf("\u2503");
    y++;
  }

  gotoxy(x, alto + tmp - 1);
  printf("\u2517");
  for (int i = 0; i < ancho - 2; i++) {
    printf("\u2501");
  }
  printf("\u251B");
  fflush(stdout);
}
