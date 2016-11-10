/*
 * Punto de venta
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Producto {
  char nombre[50];
  char marca[50];
  float costo;
  int cantidad;
};

void menu(void);
void nuevoProducto(struct Producto *p1);
void printProducto(struct Producto p1);
int getProductos(struct Producto p[], int size);
void mostrarProd(struct Producto p[], int size);
void aCeros(struct Producto *p);
void clean_stdin(void);

int main(void)
{
  int opc;
  int size = 10;
  int ciclar = 1;
  struct Producto p[size];

  for (int i = 0; i < size; i++) {
    aCeros(&p[i]);
  }
  
  do {
    printf(":");
    scanf("%d", &opc);

    switch (opc) {
    case 1:
      // ingresar producto
      system("clear");
      if (getProductos(p, size))
      nuevoProducto(&p[0]);
      break;
      
    case 2:
      // editar producto
      system("clear");
      printf("Opcion 2\n");
      break;

    case 3:
      // mostrar producto
      printProducto(p[0]);
      break;

    case 4:
      // mostrar todos los productos
      printf("%d\n", getProductos(p, size));
      mostrarProd(p, size);
      break;

    case 5:
      // mostrar costo de producto

      break;

    case 6:
      // mostrar costo total

      break;

    case 7:
      // mostrar menu
      menu();
      break;
      
    case 8:
      // salir
      system("clear");
      printf("\tBYE\n");
      ciclar = 0;
      break;

    default:
      printf("opcion no valida\n");
      
    }
    
  } while (ciclar);


  return 0;
}

/* */
void menu(void)
{
  printf("\n*****\tPunto de venta\t*****\n");
  printf("1) Ingresar producto\n");
  printf("2) Editar producto\n");
  printf("3) Mostrar producto\n");
  printf("4) Mostrar todos los productos\n");
  printf("5) Mostrar costo por producto\n");
  printf("6) Mostrar valor del inventario\n");
  printf("7) Mostrar menu\n");
  printf("8) Salir\n");
}

/* */
void nuevoProducto(struct Producto *p1)
{
  clean_stdin();
  printf("Nombre: ");
  fgets(p1->nombre, sizeof(p1->nombre), stdin);
  clean_stdin();
  printf("Marca: ");
  fgets(p1->marca, sizeof(p1->marca), stdin);
  clean_stdin();
  printf("Costo: ");
  scanf("%f", &p1->costo);
  clean_stdin();
  printf("Cantidad: ");
  scanf("%d", &p1->cantidad);

  printf("\nProducto guardado!\n\n");
}

/* */
void printProducto(struct Producto p1)
{
  printf("\n");
  printf("Producto: %s\n", p1.nombre);
  printf("Marca: %s\n", p1.marca);
  printf("Costo: $ %g\n", p1.costo);
  printf("Cantidad: %d\n\n", p1.cantidad);
}

/* esta funcion es el remplazo de fflush(stdin) */
void clean_stdin(void)
{
  int c;
  do {
    c = getchar();
  } while (c != '\n' && c != EOF);
}

/* */
int getProductos(struct Producto p[], int size)
{
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (p[i].nombre[0] != '\0') {
      count++;
    }
  }
  return count;
}

/* */
void mostrarProd(struct Producto p[], int size)
{
  for (int i = 0; i < size; i++) {
    printf("=> Producto %d\n", i + 1);
    printProducto(p[i]);
  }
}

/* */
void aCeros(struct Producto *p)
{
  p->nombre[0] = '\0';
  p->marca[0] = '\0';
  
  p->costo = 0;
  p->cantidad = 0;
}

