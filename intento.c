#include <stdio.h>

void el_cursor() {
  static int pos=0;
  char cursor[4]={'/','-','\\','|'};
  printf("%c\b", cursor[pos]);
  fflush(stdout);
  pos = (pos+1) % 4;
}

int main(int argc, char **argv) {
  int i;
  for (i=0; i<100; i++) {
    el_cursor();
    usleep(100000);
  }
  printf("\n");
  return 0;
}
