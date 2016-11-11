/**
 * figuras.h
 * Cesar Venzor - Nov/10/2016
 */

#include <stdio.h>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"


/**
 *
 */
void gotoxy(int x, int y);

void rectaH(int x, int y, int l, char *color);

void rectaV(int x, int y, int l, char *color);

void rectangulo(int x, int y, int alto, int ancho, char *color);

void triangulo(int x, int y, int alto, char *color);

void diagonal1(int x, int y, int l, char *color);

void diagonal2(int x, int y, int l, char *color);
